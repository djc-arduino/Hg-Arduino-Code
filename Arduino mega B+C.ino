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

  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);

  pinMode(11, OUTPUT);//red
  pinMode(12, OUTPUT);//green
  pinMode(13, OUTPUT);//blue


  pinMode(8, OUTPUT);//red
  pinMode(9, OUTPUT);//green
  pinMode(10, OUTPUT);//blue


  pinMode(5, OUTPUT);//red
  pinMode(6, OUTPUT);//green
  pinMode(7, OUTPUT);//blue
  
  pinMode(taster1, INPUT);
  pinMode(taster2, INPUT);
  pinMode(taster3, INPUT);


  for(int k = 45; k <= 70; k ++){
    digitalWrite(k, HIGH);
  }
  
}

void loop() {
   
 tasterstatus1=digitalRead(taster1);
 tasterstatus2=digitalRead(taster2);
 tasterstatus3=digitalRead(taster3);
  if (tasterstatus1 == HIGH){
    delay(200);
    delay(1000); //1

    digitalWrite(A15, LOW);
    digitalWrite(A14, LOW);
    digitalWrite(A13, LOW);
    digitalWrite(A12, LOW);
    digitalWrite(A11, LOW);
    digitalWrite(A10, LOW);
    digitalWrite(A9, LOW);
    digitalWrite(A8, LOW);

    digitalWrite(A7, LOW);
    digitalWrite(A6, LOW);
    digitalWrite(A5, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A3, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A0, LOW);
     
    delay(1000); //2
    digitalWrite(11, 155);
    digitalWrite(12, 0);
    digitalWrite(13, 0);

    digitalWrite(8, 0);
    digitalWrite(9, 255);
    digitalWrite(10, 00);
    
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7,  255);
    
    delay(1000);//3
    
    delay(1000);//4
    
    delay(1000);//5
    
    delay(1000);//6
    
    delay(1000);//7
    
    delay(1000);//8
    
    delay(1000);//9
    
    delay(1000);//10
     digitalWrite(48, LOW);
     digitalWrite(46, LOW);
     digitalWrite(47, LOW);
     digitalWrite(28, HIGH);
     digitalWrite(29, LOW);
     digitalWrite(A10, HIGH);
    delay(1000);//11
    
    delay(1000);//12
    
    delay(1000);//13
    
    delay(1000);//14
    
    
    delay(1000);//15
    
    delay(1000);//16
     digitalWrite(28, LOW);
     digitalWrite(29, HIGH);
     
    delay(1000);//17

        digitalWrite(11, 155);
    digitalWrite(12, 0);
    digitalWrite(13, 0);

    digitalWrite(8, 0);
    digitalWrite(9, 255);
    digitalWrite(10, 155);
    
    digitalWrite(5, 255);
    digitalWrite(6, 0);
    digitalWrite(7,  255);
    delay(1000);//18
    digitalWrite(50, LOW);
    delay(1000);//19
    
    delay(1000);//20
    digitalWrite(49,  LOW);
    digitalWrite(51, LOW);
    
    delay(1000);//21
    digitalWrite(45,LOW);
    delay(1000);//22
    
    delay(1000);//23
    
    delay(1000);//24
    
    delay(1000);//25
        digitalWrite(11, 0);
    digitalWrite(12, 255);
    digitalWrite(13, 100);

    digitalWrite(8, 100);
    digitalWrite(9, 200);
    digitalWrite(10, 0);
    
    digitalWrite(5, 0);
    digitalWrite(6, 255);
    digitalWrite(7,  155);
    delay(1000);//26
     digitalWrite(28, HIGH);
     digitalWrite(29, LOW);
    delay(1000);//27
    
    delay(1000);//28

    delay(1000);//29
    
    delay(1000);//30
    digitalWrite(48, HIGH);
    digitalWrite(49, HIGH);
    delay(1000);//31
   
    delay(1000);//32
    digitalWrite(49, LOW);
    delay(1000);//33
    digitalWrite(52,LOW);
    delay(1000);//34
    
    delay(1000);//35
     digitalWrite(28, LOW);
     digitalWrite(29, HIGH);
    delay(1000);//36

    delay(1000);//37
    digitalWrite(11, 230);
    digitalWrite(12, 0);
    digitalWrite(13, 155);

    digitalWrite(8, 255);
    digitalWrite(9, 105);
    digitalWrite(10, 00);
    
    digitalWrite(5, 255);
    digitalWrite(6, 0);
    digitalWrite(7,  50);
    
    delay(1000);//38
    
    delay(1000);//39
    
    delay(1000);//40
    
    delay(1000);//42
    digitalWrite(11,0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);

    digitalWrite(8, 0);
    digitalWrite(9, 50);
    digitalWrite(10, 200);
    
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7,  100);
    delay(1000);//43
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);

    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7,  255);
    for(int k = 45; k <= 70; k ++){
    digitalWrite(k, HIGH);
     digitalWrite(28, LOW);
     digitalWrite(29, LOW);
  }
  }
 
     
      

}
