const int pingPin = 8;


void setup() {
 
  Serial.begin(9600);
}

void loop() {
 
  long duration, inches, cm;

  
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  
 

  inches= duration/148;
cm= inches * 2.54;
  

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(0);
  
 
}
long microsecondsToInches(long microseconds) {
 

  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
 
  return microseconds / 29 / 2;
}
