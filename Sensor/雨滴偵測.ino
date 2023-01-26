int A_RainPIN = A0;
int D_RainPIN = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(7 , INPUT);
  delay(1000);
}
void loop()
{
  int DSensorValue = 0;   //讀出數位量值
  int ASensorValue = 0;   //讀出類比量值

  DSensorValue = digitalRead(D_RainPIN);   //讀出數位量值
  ASensorValue = analogRead(A_RainPIN);   //讀出類比量值
  
  Serial.println(DSensorValue);          //輸出顯示
  Serial.println(ASensorValue);          //輸出顯示
  delay(1000);
}
