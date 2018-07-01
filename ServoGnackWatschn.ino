/*
  ServoGnackWatschen - ESP8266 Wemos D1 mini - 07012018 - 

  Reads an analog input, maps it to NeoPixel RGB LEDs and an 128x64 i2c OLED display assambley
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0 to adjust brightness of the 3 NeoPixels

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

int delayval = 500;

void setup() {
  
  // Serial connection
  Serial.begin(9600);

}

void loop() {
  
  int GnackWatschenPower = analogRead(A0);
  GnackWatschenPower = GnackWatschenPower/100;                //Reads GnackWatschenPower and maps it from 0-1024 to 0-10
  
  Serial.println(GnackWatschenPower);
  
  delay(delayval);
}
