//控制點矩陣LED
int PinRow[8] = { 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };	//正極腳位
int PinCol[8] = { 10 , 11 , 12 , 13 , A0 , A1 , A2 , A3 };		//負極腳位

void setup() 
{
	for( int i=0 ; i<=7 ; i++ )
	{
		pinMode(PinRow[i], OUTPUT);
		pinMode(PinCol[i], OUTPUT);
	}
}

void loop() 
{
	for( int j=0 ; j<=7 ; j++ )
	{
		digitalWrite(PinCol[j] , HIGH);
	}
	
	for( int j=0 ; j<=7 ; j++ )
	{
		for( int i=0 ; i<=7 ; i++ )
		{
			//點亮
			digitalWrite(PinRow[i] , HIGH);
			digitalWrite(PinCol[j] , LOW);
			delay(100);
			//熄掉
			digitalWrite(PinRow[i] , LOW);
			digitalWrite(PinCol[j] , HIGH);
			delay(10);
		}
	}
}
