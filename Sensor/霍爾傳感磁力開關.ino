int DPIN = 3;    //定義訊號腳位

void setup()
{
  Serial.begin(9600);
  pinMode(DPIN , INPUT);
}

void loop()
{
  int DVal = digitalRead(DPIN);     //讀取串口的資料
  Serial.println(DVal);
  delay(50);
}
