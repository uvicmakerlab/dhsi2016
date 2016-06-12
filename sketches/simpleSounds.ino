/*
 * Exercise 3: LED to Piezo
 * 
 * Sketch by Tiffany Chan for DHSI 2016.
 * 
 * Based on Adafruit's Simple Sounds sketch: 
 * https://learn.adafruit.com/adafruit-arduino-lesson-10-making-sounds/playing-a-scale
 * 
*/

int speakerPin = 12;

int numTones = 15;

int tones[] = {330, 330, 349, 392, 392, 349, 330, 294, 261, 261, 294, 330, 330, 294, 294};

//int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A

void setup()
{
  for (int i = 0; i < numTones; i++)
  {
    tone(speakerPin, tones[i], 200);
    delay(200);
  }
  noTone(speakerPin);
}

void loop()
{
}
