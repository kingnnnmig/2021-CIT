#define RED 13
#define BLUE 12

int led_digi_timer;

void led_setup(){  
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);

 // digitalWrite(RED, LOW);
 // digitalWrite(BLUE, HIGH);

  led_digi_timer = timer.setInterval(500,led_loop);
  timer.disable(led_digi_timer);
}
  void led_loop() {
  /*digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);

  delay(500);
*/
  digitalWrite(RED, digitalRead(RED)^1);
  digitalWrite(BLUE, digitalRead(BLUE)^1);
//delay(500);//
  
}
