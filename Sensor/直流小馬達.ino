byte motorPIN = 3;

void setup(void) 
{
	pinMode( motorPIN , OUTPUT );
}
 
void loop(void) 
{
  //類比輸出可以用0~255的數值控制直流馬達轉速.
  analogWrite( motorPIN , 255 );
}
