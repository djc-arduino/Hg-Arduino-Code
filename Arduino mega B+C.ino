int taster=14;
int tasterstatus=0;

int progCount = 0;

int prog1Count = 0;
int prog2Count = 0;
int prog3Count =  0;

int kek1 = 0 ;
int kek2 = 0 ;
int kek3 = 0 ; 


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

  pinMode(taster, INPUT);
}

void loop() {
 currentMillis = millis();

   
 tasterstatus=digitalRead(taster);
  if (tasterstatus == HIGH){
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

    
    
      

}

