#include <EEPROM.h>
void setup() {
  Serial.begin(9600);
}
int val = 0;
String rx_byte;
String r_byte;
String w_byte;
void loop() {
  if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.readString();       // get the string
    rx_byte.toLowerCase();
    //Serial.println(rx_byte.substring(0, 4));
    //w_byte = rx_byte.remove(0,4);
    // check if a number was received
    if(rx_byte.substring(0, 5) == "write"){
      Serial.print("write operation received: ");
      Serial.println(rx_byte);
      int b = rx_byte.substring(6, 7).toInt();
      val = rx_byte.substring(8).toInt();
      Serial.print("The address to write is  ");
      Serial.print(b);
      Serial.print("\t The value to write is ");
      Serial.println(val);
      EEPROM.write(b,val);
      
    }
    else if (rx_byte.substring(0, 4) == "read"){
      Serial.print("read operation received: ");
      Serial.println(rx_byte);
      int a = rx_byte.substring(5, 6).toInt();
      val = EEPROM.read(a);
      Serial.print("The address to read is  ");
    Serial.print(a);
    Serial.print("\tThe value read is ");
      Serial.print(val);
      Serial.println();

    }
    else {
      Serial.println("not valid operation");
      Serial.println(rx_byte);
    }
  } // end: if (Serial.available() > 0)
}
