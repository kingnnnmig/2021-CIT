 //base

 #include <SimpleTimer.h>

 SimpleTimer timer;
 
 
 
 void setup() {
 Serial.begin(9600); 
 led_setup();
 led_anal_setup();
  
  sound_setup();
  ultra_setup();
  serial_setup();


  

}

void loop() {
  timer. run();
  ultra_loop();
  //sound_loop();
 
 serial_loop();
 // led_loop();//
  //led_anal_loop();//
  
     
}
