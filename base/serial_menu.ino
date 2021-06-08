int input_menu = 0;

void serial_setup() {
  show_menu();
}
void serial_loop(){
  if(Serial.available() >0) {
    input_menu = Serial.read();

    if(input_menu != char(10)){
      Serial.print("사용자 선택 :");
      Serial.println(char(input_menu));
    }
    
    switch(input_menu) {
      case '1':
       timer.enable(led_digi_timer);
       digitalWrite(RED, HIGH);
       timer.disable(led_anal_timer);
       analogWrite(YELLOW,0);
       i=0;
       break;

    
      case '2':
       timer.disable(led_digi_timer);
       digitalWrite(RED, LOW);
       digitalWrite(BLUE, LOW);
       timer.enable(led_anal_timer);
       i=0;
       break;

       case '3':
       timer.disable(led_digi_timer);
       //digitalWrite(RED, LOW);
       //digitalWrite(BLUE, LOW);
       timer.disable(led_anal_timer);
       i=0;
       timer.enable(sound_timer);
       break;

        case '7':
       timer.disable(led_digi_timer);
       digitalWrite(RED, LOW);
       digitalWrite(BLUE, LOW);
       timer.disable(led_anal_timer);
       analogWrite(YELLOW,0);
       i=0;
       timer.disable(sound_timer);
       for(int i=7; i<=13; i++);
        digitalWrite(1,LOW);
       break;

       case char(10):
       break;
      default:
       Serial.println("1~2까지 입력하세요.");
    }
  }
}
void show_menu() {
  Serial.println("1, Digital Control LED");
  Serial.println("2, Analog Control LED");
  Serial.println("3, sound LED Control");
  Serial.println("7, All Stop");
}
