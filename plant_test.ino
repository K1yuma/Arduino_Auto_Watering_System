#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// address 0x27, 16 chars, 2 lines
LiquidCrystal_I2C lcd_1(0x27, 16, 2);

int soil_sensor = A0;
int level = 0;

void setup() {
  // initialize LCD, columns and rows
  lcd_1.begin(16, 2);
  // turn on the backlight
  lcd_1.backlight();
  
  pinMode(soil_sensor, INPUT);
  Serial.begin(9600);
  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(soil_sensor);
  Serial.println(sensorValue);

  // map raw value into levels
  if (sensorValue <= 420) {
    level = 1;
  } else if (sensorValue <= 550) {
    level = 2;
  } else if (sensorValue <= 700) {
    level = 3;
  } else {
    level = 4;
  }

  // refresh display
  lcd_1.clear();
  lcd_1.setCursor(0, 0);
  lcd_1.print("Do am: Muc ");
  lcd_1.print(level);

  if (level >= 3) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    lcd_1.setCursor(0, 1);
    lcd_1.print("Dang tuoi cay");
  } else {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    lcd_1.setCursor(0, 1);
    lcd_1.print("Tat tuoi cay");
  }

  delay(1000);
}
