/*
Exercise 

Modified by Tiffany Chan for DHSI 2016

Adapted from Oscar Liang's sketch:
https://oscarliang.com/using-potentiometer-to-control-piezo-speaker-for-v/

The pitch varies with the position of the potentiometer.
*/

//make a list of 21 pitches to play
int notes[] = {
31,33,37,41,44,49,55,
62,65,73,82,87,98,110,
123,131,147,165,175,196,220};

//B0, C1, D1, E1, F1, G1, A1,
//B1, C2, D2, E2, F2, G2, A2,
//B2, C3, D3, E3, F3, G3, A3

int Tone = 0;
int speakerPin = 2;

void setup() {
  Serial.begin(9600);
}

void loop() {

// Get potentiometer input
int sensorValue = analogRead(A0); // 0 – 1023

//Print the sensor value to the serial monitor
Serial.println(sensorValue);

// To calculate the corresponding pitch, we divide the sensor value 
// by 49 (1023/21 = ~49). This way, each pitch corresponds to a 
// particular range of values (1st tone = 0-49, 2nd = 50-99 and so on)
int pitch = sensorValue/49;

//Using the tone command, play the corresponding pitch
tone(speakerPin, notes[pitch], 100);

// delay to let it finish ‘tone’ instruction.
delay(100);

}
