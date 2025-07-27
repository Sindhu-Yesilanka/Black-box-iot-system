#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

// Define pin numbers
#define DHTPIN 4
#define DHTTYPE DHT22
#define LED_PIN 13
#define BUZZER_PIN 14

// Sensor and display objects
DHT dht(DHTPIN, DHTTYPE);
Adafruit_MPU6050 mpu;
Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  Serial.begin(115200);

  // Initialize I/O
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  // Start sensors
  dht.begin();
  if (!mpu.begin()) {
    Serial.println("MPU6050 not found!");
    while (1);
  }

  // Start OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED initialization failed!");
    while (1);
  }

  // Welcome screen
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(10, 20);
  display.println("Black Box Init...");
  display.display();
  delay(2000);
}

void loop() {
  // Read DHT22 sensor
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  // Read MPU6050 IMU
  sensors_event_t acc, gyro, temp_event;
  mpu.getEvent(&acc, &gyro, &temp_event);

  // Check danger condition
  bool alert = false;
  if (temp > 40 || abs(acc.acceleration.x) > 10 || abs(acc.acceleration.y) > 10) {
    alert = true;
  }

  // Control indicators
  digitalWrite(LED_PIN, !alert);   // LED ON when safe
  digitalWrite(BUZZER_PIN, alert); // Buzzer ON when alert

  // Display data on OLED
  display.clearDisplay();
  display.setCursor(0, 0);
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.print("Temp: "); display.print(temp, 1); display.println(" C");
  display.print("Hum: ");  display.print(hum, 1); display.println(" %");

  display.print("Accel X: "); display.println(acc.acceleration.x, 1);
  display.print("Accel Y: "); display.println(acc.acceleration.y, 1);

  display.print("Status: ");
  display.setTextColor(alert ? BLACK : WHITE, alert ? WHITE : BLACK); // Invert for alert
  display.println(alert ? "ALERT" : "NORMAL");

  display.display();
  delay(1000);
}
