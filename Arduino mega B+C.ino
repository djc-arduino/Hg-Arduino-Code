int taster1=14;
int taster2=15;
int taster3=16;

int tasterstatus1=0;
int tasterstatus2=0;
int tasterstatus3=0;

void setup() {
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(53, OUTPUT);
  pinMode(54, OUTPUT);
  pinMode(55, OUTPUT);
  pinMode(56, OUTPUT);
  pinMode(57, OUTPUT);
  pinMode(58, OUTPUT);
  pinMode(59, OUTPUT);
  pinMode(60, OUTPUT);
  pinMode(61, OUTPUT);
  pinMode(63, OUTPUT);
  pinMode(64, OUTPUT);
  pinMode(65, OUTPUT);
  pinMode(66, OUTPUT);
  pinMode(67, OUTPUT);
  pinMode(68, OUTPUT);
  pinMode(69, OUTPUT);


  pinMode(taster1, INPUT);
  pinMode(taster2, INPUT);
  pinMode(taster3, INPUT);
}

void loop() {
   
 tasterstatus1=digitalRead(taster1);
 tasterstatus2=digitalRead(taster2);
 tasterstatus3=digitalRead(taster3);
  if (tasterstatus1 == HIGH){
      digitalWrite(46, HIGH);
      delay(500);
      digitalWrite(47, HIGH);
      digitalWrite(46, LOW);
      delay(500);
      digitalWrite(48, HIGH);
      digitalWrite(47, LOW);
      delay(500);
      digitalWrite(49, HIGH);
      digitalWrite(48, LOW);
       delay(500);
      digitalWrite(50, HIGH);
      digitalWrite(49, LOW);
  }
  if (tasterstatus2 == HIGH){
     digitalWrite(46, HIGH);
      delay(1000);
      digitalWrite(47, HIGH);
      digitalWrite(46, LOW);
      delay(1000);
      digitalWrite(48, HIGH);
      digitalWrite(47, LOW);
      delay(1000);
      digitalWrite(49, HIGH);
      digitalWrite(48, LOW);
       delay(1000);
      digitalWrite(50, HIGH);
      digitalWrite(49, LOW);
  }
  if (tasterstatus3 == HIGH){
    digitalWrite(46, HIGH);
      delay(200);
      digitalWrite(47, HIGH);
      digitalWrite(46, LOW);
      delay(200);
      digitalWrite(48, HIGH);
      digitalWrite(47, LOW);
      delay(200);
      digitalWrite(49, HIGH);
      digitalWrite(48, LOW);
       delay(200);
      digitalWrite(50, HIGH);
      digitalWrite(49, LOW);
  }
  

    
    
      

}
