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
      for (int i = 45; i <= 69; i++) {
        digitalWrite(i, HIGH);
        digitalWrite(i - 1 , LOW);
        delay(3000);
      }
  }
  if (tasterstatus2 == HIGH){
     for (int i = 45; i <= 69; i++) {
        digitalWrite(i, HIGH);
        digitalWrite(i - 1 , LOW);
        delay(3000);
      }
  }
  if (tasterstatus3 == HIGH){
    for (int i = 45; i <= 69; i++) {
        digitalWrite(i, HIGH);
        digitalWrite(i - 1 , LOW);
        delay(3000);
      }
  }
  

    
    
      

}
