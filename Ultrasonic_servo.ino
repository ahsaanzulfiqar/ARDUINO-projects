    #include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Stepper.h>
#include <Servo.h>
#define trigger 3
#define echo 4
LiquidCrystal_I2C lcd(0x27, 16, 2);
int stepBothSide = 2000;
Stepper myStepper = Stepper(stepBothSide, 8, 9, 10, 11);
int blue = 6;

Servo myServo;
float distance;
long duration;
void setup() {
  pinMode(blue, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  myServo.attach(2);
 // myServo.write(0);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2, 0);
  Serial.println("---------Hello AND Welcome---------");
  //delay(2000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Ultransonic");
  Serial.println("Ultransonic sensor is detecting an objects.... ");
  lcd.setCursor(1, 1);
  lcd.print("is detecting");
  //delay(4000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("^Be Carefull^");
  //Serial.println("Be Carefull");
  delay(2000);

  lcd.clear();
  /* digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  lcd.setCursor(5,0);
  lcd.print(distance);*/
}
void loop() {

  /* digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;*/

  myServo.write(0);
  delay(3000);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  //lcd.setCursor(2,0);
  //lcd.print(distance);
  Serial.print(distance);
  Serial.println("cm");
  if (distance <= 50) {
   
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Be Alert!--- A unknown person enter our range..");
    Serial.println(" Be Alert!--- A unknown person enter our range ...");
    Serial.println(" This object distance is in 50 cm...");
     digitalWrite(blue, HIGH);
    delay(3000);
    
     digitalWrite(blue, LOW);
    //delay(1000);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Someone is in");
    lcd.setCursor(1, 1);
    lcd.print("range of 50cm");
    //delay(2000);
    lcd.clear();
  } else {
    digitalWrite(blue, LOW);
  }

  myServo.write(70);
  delay(3000);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  //lcd.setCursor(2,0);
  //lcd.print(distance);
  Serial.print(distance);
  Serial.println("cm");
  if (distance <= 50) {
  
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Be Alert!--- A unknown person enter our range..");
    Serial.println("Be Alert!--- A unknown person enter our range ...");
    Serial.println("This object distance is in 50 cm...");
      digitalWrite(blue, HIGH);
    delay(3000);
     digitalWrite(blue, LOW);
    //delay(1000);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Someone is in");
    lcd.setCursor(1, 1);
    lcd.print("range of 50cm");
    //delay(2000);
    lcd.clear();
  } else {
    digitalWrite(blue, LOW);
  }

  myServo.write(90);
  delay(3000);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  lcd.setCursor(2, 0);
  lcd.print(distance);
  Serial.print(distance);
  Serial.println("cm");
  if (distance <= 50) {
   
    lcd.clear();
    Serial.println("Be Alert!--- A unknown person enter our range ...");
    Serial.println("This object distance is in 50 cm...");
     digitalWrite(blue, HIGH);
    delay(3000);
     digitalWrite(blue, LOW);
    lcd.setCursor(1, 0);
    lcd.print("--Be Alert!--");
    //delay(1000);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Someone is in");
    lcd.setCursor(1, 1);
    lcd.print("range of 50cm");
    //delay(2000);
    lcd.clear();
  } else {
    digitalWrite(blue, LOW);
  }
  myServo.write(120);
  delay(3000);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  //lcd.setCursor(2,0);
  Serial.print(distance);
  Serial.println(" cm");
  if (distance <= 50) {
    digitalWrite(blue, HIGH);
    delay(3000);
     digitalWrite(blue, LOW);
    Serial.println("Be Alert!--- A unknown person enter our range ...");
    Serial.println("This object distance is in 50 cm...");
     digitalWrite(blue, HIGH);
    delay(3000);
     digitalWrite(blue, LOW);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("--Be Alert!--");
    //delay(1000);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Someone is in");
    lcd.setCursor(1, 1);
    lcd.print("range of 50cm");
    // delay(2000);
    lcd.clear();
  } else {
    digitalWrite(blue, LOW);
  }
  myServo.write(180);
  delay(3000);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;
  ///lcd.setCursor(2,0);
  Serial.print(distance);
  Serial.println(" cm");
  if (distance <= 50) {
    
    Serial.println("Be Alert!--- A unknown person enter our range ...");
    Serial.println("This object distance is in 50 cm...");
    digitalWrite(blue, HIGH);
    delay(3000);
     digitalWrite(blue, LOW);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("--Be Alert!--");
    delay(1000);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Someone is in");
    lcd.setCursor(1, 1);
    lcd.print("range of 50cm");
    //delay(2000);
    lcd.clear();
  } else {
    digitalWrite(blue, LOW);
  }




  /*if(distance<=50){
      /*digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;*/
  //myServo.write(0);
  /* digitalWrite(blue, HIGH);
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("--Be Alert!--");
    delay(1000);
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Someone is in");
    lcd.setCursor(1,1);
    lcd.print("range of 50cm");
    delay(2000);
    lcd.clear();*/

  /*if(distance==50){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Someone is touch");
    lcd.setCursor(1,1);
    lcd.print("the red line");
    delay(2000);
    lcd.clear();

    }
  }*/







  /* digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  lcd.setCursor(2,0);
  lcd.print("Nearly object");
  lcd.setCursor(3,1);
  lcd.print("distance is");
  delay(1000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print(distance);
  lcd.setCursor(11,0);
  lcd.print("cm");
  delay(3000);
  myServo.write(0);
  
  delay(10);
  lcd.clear();*/


  delay(500);
}
