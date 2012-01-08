/** 
 *
 * Christmasqualizer
 * Copyright 2011 Hotchkissmade
 * Released under the GPL
 *
 * Special thanks for the help from the following:
 * http://nuewire.com/info-archive/msgeq7-by-j-skoba/
 *
 */
 
 
//
// MSGEQ7 interface pins. See above link for more info.
//
int analogPin = A0;
int strobePin = 11;
int resetPin = 12;


//
// Control pins, from lows to highs in the audio range.
// This MUST have seven values to work correctly.
//
int pins[] = { 2, 3, 4, 5, 8, 9, 10 };


//
// No real need to edit past here.
//
void setup() {
 Serial.begin(9600);
 pinMode(analogPin, INPUT);
 pinMode(strobePin, OUTPUT);
 pinMode(resetPin, OUTPUT);
 analogReference(DEFAULT);
 
 for (int i = 0; i < 7; i++) {
  pinMode(pins[i], OUTPUT);
 }

 digitalWrite(resetPin, LOW);
 digitalWrite(strobePin, HIGH);
}

void loop() {
  digitalWrite(resetPin, HIGH);
  digitalWrite(resetPin, LOW);
  
  for (int i = 0; i < 7; i++) {
    digitalWrite(strobePin, LOW);
    delayMicroseconds(30);
    int value = analogRead(analogPin);
    
    if ( value > 110 ) {
     digitalWrite(pins[i], HIGH);
    } else if ( value < 110 ) {
     digitalWrite(pins[i], LOW); 
    }
    
    digitalWrite(strobePin, HIGH);
  }
 }

