#include <LiquidCrystal.h>
#include <dht.h>

dht DHT;

#define DHT11_PIN 6

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  delay(3000);
  lcd.print("Easy...");
  delay(3000);
  lcd.setCursor(0,1);
  lcd.print("Pizzi!");
  delay(3000);

}


void loop(){
  int chk = DHT.read11(DHT11_PIN);
  
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(2000);


}
