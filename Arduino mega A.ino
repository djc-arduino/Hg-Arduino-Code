int taster=13;
int tasterstatus=0;

int progCount = 0;

int runprog = 0;

int kek1 = 0;
int kek2 = 0;
int kek3 = 0;
int kek4 = 0;

unsigned long previousMillis = 0;
const long interval = 1000;

unsigned long currentMillis ;

 
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

  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(18, OUTPUT);

  pinMode(taster, INPUT);
}

void loop() {
 currentMillis = millis();



   
tasterstatus=digitalRead(taster);
if (tasterstatus == HIGH)
{
while(kek1 < 2 ) {
kek1 = 2 ;
progCount ++;

if(runprog == 0){
      
      if(progCount == 1){
         progCount = 1;
        digitalWrite(14, HIGH);
        delay(200);
        digitalWrite(14, LOW);
        for (int i = 45; i <= 69; i++) {
        digitalWrite(i, HIGH);
        digitalWrite(i - 1 , LOW);
        delay(3000);
      }
        runprog = 0;
      }
      if(progCount == 2){
         runprog = 1;
       digitalWrite(15, HIGH);
        delay(200);
        digitalWrite(15, LOW);
        for (int i = 45; i <= 69; i++) {
        digitalWrite(i, HIGH);
        digitalWrite(i - 1 , LOW);
        delay(3000);
      }
       runprog = 0;
      }
      if(progCount == 3){
      runprog = 1;
      digitalWrite(16, HIGH);
        delay(200);
        digitalWrite(16, LOW);
        for (int i = 45; i <= 69; i++) {
        digitalWrite(i, HIGH);
        digitalWrite(i - 1 , LOW);
        delay(3000);
      }
       runprog = 0;
      }

  
    }

}
}
else
{
 
kek1 = 1 ;
}

    
}    
