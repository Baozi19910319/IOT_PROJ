int APIN = A0;		//類比訊號腳位
int DPIN = 3;		//數位訊號腳位

void setup()
{
  Serial.begin(9600);
  pinMode(APIN , INPUT);
  pinMode(DPIN , INPUT);
}

void loop()
{
  int AVal = analogRead(APIN);		//讀取類比串口的資料
  int DVal = digitalRead(DPIN);		//讀取數位串口的資料
  
  Serial.println(AVal);
  //Serial.println(DVal);
  delay(50);
}
