//蜂鳴器實驗
int BuzzerPIN=8;  //蜂鳴器PIN腳

void setup()
{
  pinMode(BuzzerPIN , OUTPUT);
}
void loop()
{
  int ST = 100;		//定義占及空持續時間(毫秒)
  while(1)
  {
//定義這個頻率持續發聲的時間(這裡是定義為1秒)
    for( int i=0 ; i < ( 1000/ (ST*2) ) ; i++ )	//1秒=1000毫秒
    {
      //用PWM的占空方式輸出一個頻率的聲音
      digitalWrite( BuzzerPIN , HIGH );    //占(發聲)
      delay(ST);
      digitalWrite( BuzzerPIN , LOW );     //空(靜音)
      delay(ST);
    }
  }
}

