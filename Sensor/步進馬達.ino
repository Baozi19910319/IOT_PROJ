//定義PIN腳
int motorPin_A = 8;
int motorPin_AP = 9;
int motorPin_B = 10;
int motorPin_BP = 11;
int delayTime = 0;
void setup()
{
pinMode(motorPin_A, OUTPUT);
pinMode(motorPin_AP, OUTPUT);
pinMode(motorPin_B, OUTPUT);
pinMode(motorPin_BP, OUTPUT);
}
void loop()
{
//方法一：整步, 調整相位間切換的間隔時間

睿康創意工作室

//傳入值越低, 切換越快, 但要注意是否失步.
RunSteoMotor1(10);
//方法二：整步, 調整相位間切換的間隔時間
//傳入值越低, 切換越快, 但要注意是否失步.
RunSteoMotor2(10);
//方法三：半步, 調整相位間切換的間隔時間
//傳入值越低, 切換越快, 但要注意是否失步.
RunSteoMotor3(10);
}
//方法一：一相激磁
void RunSteoMotor1(int val)
{
delayTime = val;
digitalWrite(motorPin_A, HIGH);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,HIGH);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, HIGH);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,HIGH);
delay(delayTime);
}
//方法二：二相激磁
void RunSteoMotor2(int val)
{
delayTime = val;

睿康創意工作室

digitalWrite(motorPin_A, HIGH);
digitalWrite(motorPin_AP,HIGH);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,HIGH);
digitalWrite(motorPin_B, HIGH);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, HIGH);
digitalWrite(motorPin_BP,HIGH);
delay(delayTime);
digitalWrite(motorPin_A, HIGH);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,HIGH);
delay(delayTime);
}
//方法三：一,二相激磁
void RunSteoMotor3(int val)
{
delayTime = val;
digitalWrite(motorPin_A, HIGH);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, HIGH);
digitalWrite(motorPin_AP,HIGH);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,HIGH);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,LOW);

睿康創意工作室

delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,HIGH);
digitalWrite(motorPin_B, HIGH);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, HIGH);
digitalWrite(motorPin_BP,LOW);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, HIGH);
digitalWrite(motorPin_BP,HIGH);
delay(delayTime);
digitalWrite(motorPin_A, LOW);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,HIGH);
delay(delayTime);
digitalWrite(motorPin_A, HIGH);
digitalWrite(motorPin_AP,LOW);
digitalWrite(motorPin_B, LOW);
digitalWrite(motorPin_BP,HIGH);
delay(delayTime);
}
