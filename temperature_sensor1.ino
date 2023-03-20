# include<Servo.h>

float temp;
int tempPin = A0;
int pin_servo=6;

Servo myServo;
  

void setup()
{
  myServo.attach(pin_servo);
   Serial.begin(9600);
  myServo.write(0);
  
}

void loop() 
{
   int analog_value = analogRead(tempPin);
  float temp = (((analog_value*5.0)/1024.0)-0.5)*100;
   Serial.println(temp); 
  if (temp >=30)
  {
    myServo.write(90);
  }
  else
  {
    myServo.write(0);
  }
   delay(0);
}