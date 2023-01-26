int LedPin = 7;    //LED PIN腳
int anaPIN = A0;    //電位器中間的 PIN腳
int val = 0;    //電位器讀取值
 
void setup() 
{
  pinMode(LedPin, OUTPUT);
} 
 
void loop() 
{ 
  val = analogRead( anaPIN );    //讀取值
  analogWrite( LedPin , val/4 );
}

