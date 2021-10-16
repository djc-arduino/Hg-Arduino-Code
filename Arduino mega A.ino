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
  if (tasterstatus == HIGH){
    if(runprog == 0){
      progCount ++;
      if(progCount == 1){
        kek1 = 1;
        runprog = 1;
      }
      if(progCount == 2){
        runprog = 1;
        kek2 = 1;
      
      }
      if(progCount == 3){
      runprog = 1;
      kek3 = 1;
      }

    if(tasterstatus == HIGH){
     kek4 = 1; 
    }else {
      kek4 = 0;
    }
      if(kek1 == 1){
        if(tasterstatus == 0){
          runprog = 1;
            digitalWrite(46, HIGH);
            digitalWrite(14, HIGH);
            delay(500);
            digitalWrite(47, HIGH);
            digitalWrite(46, LOW);
            digitalWrite(14, LOW);
            delay(500);
            digitalWrite(48, HIGH);
            digitalWrite(47, LOW);
            delay(500);
            digitalWrite(49, HIGH);
            digitalWrite(48, LOW);
             delay(500);
            digitalWrite(50, HIGH);
            digitalWrite(49, LOW);
         runprog = 0;
         kek1 = 0;
        }
      }

      if(kek2 == 1){
        if(tasterstatus == 0){
          runprog = 1;
      digitalWrite(46, HIGH);
      digitalWrite(15, HIGH);
      delay(1000);
      digitalWrite(47, HIGH);
      digitalWrite(46, LOW);
      digitalWrite(15, LOW);
      delay(1000);
      digitalWrite(48, HIGH);
      digitalWrite(47, LOW);      
      digitalWrite(48, LOW);
      delay(1000);
      digitalWrite(49, HIGH);
       delay(1000);
      digitalWrite(50, HIGH);
      digitalWrite(49, LOW);
      runprog = 0;
      kek2 = 0;
        }
      }

      if(kek3 == 3){
        if(tasterstatus == 0){
          runprog = 1;
      digitalWrite(46, HIGH);
      digitalWrite(15, HIGH);
      delay(200);
      digitalWrite(47, HIGH);
      digitalWrite(46, LOW);
      digitalWrite(15, LOW);
      delay(200);
      digitalWrite(48, HIGH);
      digitalWrite(47, LOW);
      delay(200);
      digitalWrite(49, HIGH);
      digitalWrite(48, LOW);
       delay(200);
      digitalWrite(50, HIGH);
      digitalWrite(49, LOW);
      runprog = 0;
      kek3 = 0;
        }
      }
    }
    
     if(kek4 == 1){
      
      digitalWrite(18,HIGH);
      delay(200);
      digitalWrite(18, LOW);
      
     }
    
}    
}
