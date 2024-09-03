int Password;
int flame_sensor = 2;
int redled = 3;
int yellowled = 4;
int greenled = 5;
String msg1 = "The Door Locked! Enter Correct Password to Unlock";
String msg2 = "You Put Wrong Password ' Please try again.";
String msg3 = "Congratulation ! You Entered Correct Password. The Door has Unlocked. 
Now you can open door and enter the room.";
String msg4 = "You Entered ::  ";



int correctPassword = 27380;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(flame_sensor, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.println(msg1);

  /* while(Serial.available()==0){

  }
   Password = Serial.parseInt();
   Serial.println(msg4 + Password);
     if(Password!=correctPassword){
    Serial.println(msg2);
    digitalWrite(redled,HIGH) ; 
  }
  else if(Password==correctPassword){
    Serial.println(msg3);
    digitalWrite(redled,LOW);
    delay(1000);
    digitalWrite(yellowled,HIGH);
    delay(5000);
    digitalWrite(yellowled,LOW);
    delay(1000);
    digitalWrite(greenled,HIGH);

  }*/
}

void loop() {
  // put your main code here, to run repeatedly:

  while (Serial.available() == 0) {
  }
  Password = Serial.parseInt();
  Serial.println(msg4 + Password);
  if (Password != correctPassword) {
    Serial.println(msg2);
    digitalWrite(redled, HIGH);
  } else if (Password == correctPassword) {
    Serial.println(msg3);
    digitalWrite(redled, LOW);
    delay(1000);
    digitalWrite(yellowled, HIGH);
    delay(5000);
    digitalWrite(yellowled, LOW);
    delay(1000);
    digitalWrite(greenled, HIGH);
  }
}
