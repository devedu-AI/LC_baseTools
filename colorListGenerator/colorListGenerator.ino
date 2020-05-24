#include "colorObj.h"


void setup() {

  Serial.begin(9600);
  while(!Serial);

  // put the defined colors here.
  
  Serial.println();
  Serial.println(F("/*****************************************************************************************/"));
  Serial.println(F("/************** This case block is auto generated by colorListGenerator.ino **************/"));
  Serial.println(F("/*****************************************************************************************/"));
  Serial.println();
  
  doColor(LC_BLACK,"BLACK");
  doColor(LC_DARK_GREY,"DARK_GREY");
  doColor(LC_LIGHT_GREY,"LIGHT_GREY");
  doColor(LC_WHITE ,"WHITE");

  doColor(LC_RED,"RED");
  doColor(LC_PINK,"PINK");

  doColor(LC_GREEN,"GREEN");
  doColor(LC_DARK_GREEN,"DARK_GREEN");
  doColor(LC_OLIVE,"OLIVE");

  doColor(LC_BLUE,"BLUE");
  doColor(LC_LIGHT_BLUE,"LIGHT_BLUE");
  doColor(LC_NAVY,"NAVY");
  
  doColor(LC_PURPLE,"PURPLE");
  doColor(LC_LAVENDER,"LAVENDER");
  doColor(LC_ORANGE,"ORANGE");
  
  doColor(LC_CYAN ,"CYAN");
  doColor(LC_MAGENTA,"MAGENTA");
  doColor(LC_YELLOW,"YELLOW");

  Serial.println();
  Serial.println(F("/*****************************************************************************************/"));
  Serial.println(F("/*****************************************************************************************/"));
  Serial.println(F("/*****************************************************************************************/"));
  Serial.println();
}

// And the case statements should come out here on your serial monitor.
void doColor(byte r,byte g,byte b,char* color) {

  colorObj aColor;
  word value;
  
  aColor.setColor(r,g,b);
  value = aColor.getColor16();
  Serial.print("\tcase 0x");Serial.print(value,HEX);Serial.print(" : ");Serial.print("// ");Serial.println(color);
  Serial.print("\t\tred = ");Serial.print(r);Serial.println(";");
  Serial.print("\t\tgreen = ");Serial.print(g);Serial.println(";");
  Serial.print("\t\tblue = ");Serial.print(b);Serial.println(";");
  Serial.println("\tbreak;");
} 


void loop() {
  // put your main code here, to run repeatedly:

}
