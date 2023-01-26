int WaterPin = 0;		//模塊訊號輸出腳位
int SensorValue = 0;	//傳感器讀出值
int AlertValue = 300;	//警示值設定
void setup()
{
	Serial.begin(9600);
	delay(1000);		
}
void loop()
{
	SensorValue = analogRead(WaterPin);		//讀出類比量值
	Serial.println(SensorValue);					//輸出到串列埠

	if(SensorValue < AlertValue)				//水位過低時的判斷程式
	{
		Serial.println("Low water level");		//水位過低時的處理程序
	}
	delay(1000);
}
