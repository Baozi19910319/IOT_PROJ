//震動傳感器
const int sensorPin = 2;
const int ledPin = 7;
 
int tiltSensorPreviousValue = 0;
int tiltSensorCurrentValue = 0;
long lastTimeMoved = 0;
int shakeTime = 30;
 
void setup() 
{
	//設定為輸入
    pinMode(sensorPin, INPUT);
	//上拉電阻
    digitalWrite(sensorPin, HIGH);
	//設定為輸出
    pinMode(ledPin, OUTPUT);
}
 
void loop() 
{
	//讀取目前狀態
    tiltSensorCurrentValue = digitalRead(sensorPin);
	//如果狀態改變
    if (tiltSensorPreviousValue != tiltSensorCurrentValue) 
    {
		//記錄時間
        lastTimeMoved = millis();
		//更新狀態
        tiltSensorPreviousValue = tiltSensorCurrentValue;
    }
	
	//如果在設定的時間內狀態有改變
    if (millis() - lastTimeMoved < shakeTime) 
    {
        digitalWrite(ledPin, HIGH);
    }
    else 
	{
        digitalWrite(ledPin, LOW);
    }
}
