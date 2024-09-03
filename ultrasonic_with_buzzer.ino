 #define trig_pin 4 // define pin connect 4 in arduino
#define echo_pin 5 // coonect in 5 
#define buzzer_pin 3 // buzzer pin connect in 3
long duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(buzzer_pin, OUTPUT);
}

void loop() {
 if(distance<=20){
digitalWrite(buzzer_pin, HIGH);
Serial.println("Enemy is near the house");
  }
  else{
 digitalWrite(buzzer_pin, LOW);
  } 
 // digitalWrite(buzzer_pin, HIGH);
 
 
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
   
   duration = pulseIn(echo_pin,HIGH);
   distance = duration*0.034/2;
   Serial.print("Distance of Object is : ");
   Serial.print(distance );
  Serial.println(" cm");
  delay(2000);
}
