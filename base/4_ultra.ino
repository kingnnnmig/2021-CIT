//4_ultra

#define TRIG 5

#define ECHO 4

long duration, distance;

void ultra_setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
 }

 void ultra_loop(){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 17/1000;
  Serial.print("Distance :");
  Serial.print(distance);
  Serial.println("cm");

  delay(1000);
 }
