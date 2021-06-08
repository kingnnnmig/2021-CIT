#define YELLOW 11

int i=0;
int gap = 50;

int led_anal_timer;

void led_anal_setup() {
  pinMode(YELLOW, OUTPUT);
  led_anal_timer = timer.setInterval(200, led_anal_loop);
  timer.disable(led_anal_timer);
}
void led_anal_loop() {
 /*for(int i=0; i<= 255; i+=10) {
 analogWrite(YELLOW,i); // YELLOW :9 pin
 delay(500);
  }

  for(int i=250; i>=0; i-=10) {
  analogWrite(YELLOW,i); // YELLOW: 9 pin
  delay(500);
  }*/
  
//Serial.print("i:");//
//Serial.println(i);//

 analogWrite(YELLOW, i);
i+= gap;

if(i>=255){
  i=255;
  gap*=-1;
}

if(i<=0){
  gap*=+1;
  i=0;
}
//delay(50);
  
}
