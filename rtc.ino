#include <Wire.h>
#include "DS3231.h"


RTClib RTC;

void setup () {
    Serial.begin(57600);
    Wire.begin();
}

void loop () {
  
    delay(1000);
  
    DateTime now = RTC.now();
    
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
    
//    Serial.print(" since midnight 1/1/1970 = ");
//    Serial.print(now.unixtime());
//    Serial.print("s = ");
//    Serial.print(now.unixtime() / 86400L);
//    Serial.println("d");
}


/*
DS3231 Clock;

void setup() {
  // Start the serial port
  //Serial.begin(9600);

  // Start the I2C interface
  Wire.begin();
}

void loop() {
  Clock.setClockMode(false);  // set to 24h
  Clock.setYear(19);
    Clock.setMonth(07);
    Clock.setDate(28);
    //Clock.setDoW(DoW);
    Clock.setHour(22);
    Clock.setMinute(41);
    Clock.setSecond(00);
    delay(10000);
}
*/
