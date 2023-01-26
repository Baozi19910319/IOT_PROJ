int APIN = A0;    //類比腳

void setup()
{
  Serial.begin(9600);
  pinMode(APIN , INPUT);
}
void loop()
{
  int Aval = analogRead(APIN);    //讀取類比串口的資料
  Serial.println(Aval);
  delay(50);
}
