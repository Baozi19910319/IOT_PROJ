int TPIN = 7;    //訊號腳

void setup()
{
  Serial.begin(9600);
  pinMode(TPIN , INPUT);
}

void loop()
{
  int Val = digitalRead(TPIN);    //讀取腳位的資料
  Serial.println(Val);			//將資料輸出到串口埠
  delay(100);
}
