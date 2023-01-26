//以按鍵控制LED 閃爍
int BtnPin = 4;
int LedPin = 7;

void setup()
{
	//pinMode(BtnPin, INPUT);				//原本的程式碼
	pinMode(BtnPin, INPUT_PULLUP);		//上拉電阻
	pinMode(LedPin, OUTPUT);
}

void loop()
{
	while(1)
	{
	  if (digitalRead(BtnPin)==LOW)  //原本是讀取HIGH值,現在改讀取LOW值
		digitalWrite(LedPin, HIGH);
		
	  digitalWrite(LedPin, LOW);
	}
}

