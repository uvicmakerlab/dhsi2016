/*
Adafruit Arduino - Lesson 10. Pseudo Thermin
*/
 
int speakerPin = 2;
int photocellPin = 0;
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  // Get potentiometer input
int sensorValue = analogRead(A0); // 0 – 1023

//Print the sensor value to the serial monitor
Serial.println(sensorValue);

  int reading = analogRead(photocellPin);
  int pitch = 200 + reading / 4;
  tone(speakerPin, pitch);
}
