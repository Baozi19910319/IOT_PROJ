int LedPin = 7;		//LED PIN腳
int cdsPIN = A5;    //CDS PIN腳
int val = 0;		//cds 讀取值
 
void setup() 
{
	pinMode(LedPin, OUTPUT);
} 
 
void loop() 
{ 
  val = analogRead(cdsPIN);    //讀取cds值
    if(val<=350)
  {
    digitalWrite(LedPin, HIGH);
  }
  else
  {
    digitalWrite(LedPin, LOW);
  }
}
