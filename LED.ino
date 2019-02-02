int redPin = A1;
int greenPin = A3;
int bluePin = A2;

 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  setColor(255, 0, 0);  // red
  delay(2000);
  setColor(0, 255, 0);  // green
  delay(2000);
  setColor(0, 0, 255);  // blue
  delay(2000);
  setColor(255, 255, 255); //white
  delay(2000);
  
}
 
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
