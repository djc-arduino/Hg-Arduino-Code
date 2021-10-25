int taster=13;
int tasterstatus=0;
int kek1 = 0;

int leds[] = {45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70};

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
  pinMode(70, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(taster, INPUT);

  

  for(int k = 45; k <= 70; k ++){
    digitalWrite(k, HIGH);
  }

}

void loop() {

tasterstatus=digitalRead(taster);
if (tasterstatus == HIGH)
{
while(kek1 < 2 ) {
kek1 = 2 ;
digitalWrite(14, HIGH);
delay(200);
digitalWrite(14, LOW);
delay(10000);

digitalWrite(51, LOW);
delay(200);
digitalWrite(51, HIGH);

delay(1000); //1


delay(1000); //2

delay(1000);//3

delay(1000);//4

delay(1000);//5
digitalWrite(A3, LOW);
delay(1000);//

delay(1000);//7

delay(1000);//8

delay(1000);//9

delay(1000);//10
 digitalWrite(47, LOW);
 digitalWrite(45, LOW);
 digitalWrite(46, LOW);
 digitalWrite(A8, LOW);
 digitalWrite(A7, LOW);
delay(1000);//11

delay(1000);//12

delay(1000);//13

delay(1000);//14
digitalWrite(48,  LOW);
delay(1000);//15

delay(1000);//16

delay(1000);//17

delay(1000);//18

delay(1000);//19

delay(1000);//20
digitalWrite(50, LOW);
digitalWrite(52, LOW);
digitalWrite(A13, LOW);
digitalWrite(A15, LOW);
digitalWrite(A2, LOW);
delay(1000);//21
digitalWrite(49,LOW);
delay(1000);//22

delay(1000);//23

delay(1000);//24
digitalWrite(A6,LOW);
delay(1000);//25

delay(1000);//26

delay(1000);//27

delay(1000);//28
digitalWrite(A14, LOW);
digitalWrite(A12, LOW);
digitalWrite(A5, LOW);
delay(1000);//29

delay(1000);//30
digitalWrite(47, HIGH);
delay(1000);//31
digitalWrite(A4, LOW);
delay(1000);//32

delay(1000);//33
digitalWrite(51,LOW);
delay(1000);//34

delay(1000);//35

delay(1000);//36
digitalWrite(A13, HIGH);
delay(1000);//37
digitalWrite(A13, LOW);
delay(1000);//38

delay(1000);//39

delay(1000);//40

delay(1000);//42

delay(1000);//43
  for(int k = 45; k <= 70; k ++){
    digitalWrite(k, HIGH);
  }



}
}
else
{
kek1 = 1 ;
}


 

}
