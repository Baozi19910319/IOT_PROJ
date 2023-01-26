//火燄偵測器
int DetectPin=A0;		//定義類比輸入腳位
int DelayTime=500;		//偵測間隔時間

void setup()
{ 
	Serial.begin(9600);
}

void loop() 
{
	int DetectVal = analogRead( DetectPin );	//偵測輸入的類比值
	Serial.println(DetectVal);
	delay(DelayTime);
}
