
int ledPin=3;
int readPin=A0;
int readPinVal;
int SwitchPin=2;
int ledState=0;
int oldState=1;
int newState;
int delayTime=250;

void setup()
{
 pinMode(ledPin,OUTPUT);
 pinMode(readPin,INPUT);
 pinMode(SwitchPin,OUTPUT);
 Serial.begin(9600); 
}

void loop()
{
  digitalWrite(SwitchPin,HIGH);
  
  readPinVal=digitalRead(readPin);
  Serial.println(readPinVal);
  newState=readPinVal;
  
  if(newState==1&&oldState==0){
    if(ledState==0){
      digitalWrite(ledPin,HIGH);
     ledState=1;
    }
    else{
    digitalWrite(ledPin,LOW);
     ledState=0;
    
    }
  }
  
  oldState=newState;
   delay(delayTime);
    
}