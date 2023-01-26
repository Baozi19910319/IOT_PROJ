const int TrigPin = 2;
const int EchoPin = 3;
float CM_Value;

void setup()
{
  Serial.begin(9600);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop() 
{
  //先發送一個低電平,再發一個高電平脈衝到TrigPin
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(TrigPin, LOW);

  //傳回時間
  CM_Value = pulseIn(EchoPin, HIGH);
  //轉換成距離
  CM_Value = CM_Value * 34 / 1000 / 2;
  
  Serial.print(CM_Value);
  Serial.print(" cm");
  Serial.println();
  
  delay(1000);
}
