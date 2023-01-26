#include <Servo.h> 
int ServoPin = 5;
const int pulseStart = 500;    //伺服器脈衝寬值域
const int pulseEnd = 2400;    //伺服器脈衝寬值域
Servo myservo;	    //宣告物件

int GapTime=100;	//間隔時間
int OpenArc=1;	    //最小角度
int CloseArc=180;	//最大角度

void setup() 
{ 
  myservo.attach(ServoPin, pulseStart, pulseEnd);	// 修正脈衝寬度範圍
  myservo.write(90); 	  // 設定中點位置
  
  delay(1000);
} 

void loop() 
{
	for(int i = OpenArc; i <= CloseArc; i+=2)
	{
	    myservo.write(i);
	    delay(GapTime);
	}
	for(int i = CloseArc; i >= OpenArc; i-=2)
	{
	    myservo.write(i);
	    delay(GapTime);
	}
	delay(1000);
}
