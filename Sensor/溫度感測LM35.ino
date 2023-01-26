// 溫度偵測
int LM35Pin = A0;		//設定LM35的PIN腳
int DelayTime = 500;	//偵測間隔時間

void setup() 
{
	Serial.begin(9600);         //設定串口速率
}

void loop()
{
	//宣告一個浮點數,讀出一個類比值(電壓), 並經過換算轉成相對的溫度值
	float TemptureVal = analogRead(LM35Pin) * 0.48828125;
	Serial.println(TemptureVal);
	delay(DelayTime);
}
