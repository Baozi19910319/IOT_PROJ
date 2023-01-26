const int PIRPIN=7;
void setup()
{
  pinMode(PIRPIN , INPUT);
  Serial.begin(9600);
}
void loop() 
{
  int val=digitalRead(PIRPIN);
  if (val==HIGH)
  {
    Serial.println(val);
    //若有人體通過偵測到時
  }
  else 
  {
    Serial.println(val);
    //沒有偵測到時
  }
}
