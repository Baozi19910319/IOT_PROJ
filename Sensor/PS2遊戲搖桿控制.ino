int minX=2000 , midX=1000, maxX=0;
int minY=2000 , midY=1000, maxY=0;

//PS2搖桿定義
int X_PolitPin = 0;		//X軸類比串口編號 A0
int Y_PolitPin = 1;		//Y軸類比串口編號 A1

int vStep=5;	//讀取類比值間隔時間

void setup()
{
	int X_Val=0;				//X變量函數
	int Y_Val=0;				//Y變量函數
	
	Serial.begin(9600);
	//取得X/Y中位值
	Serial.println("Setup Middle...");
	midX = analogRead(X_PolitPin);		// 讀取X串口置中可變電阻值
	midY = analogRead(Y_PolitPin);		// 讀取Y串口置中可變電阻值
	Serial.println("Setup OK...");
	delay(1000);
	
	//取得X/Y極大值及極小值
	Serial.println("Try Your Joystrick...");
	for(int i=1 ; i<=10000 ; i++)
	{
		X_Val = analogRead(X_PolitPin);
		if (X_Val < minX) minX = X_Val;
		if (X_Val > maxX) maxX = X_Val;
		
		Y_Val = analogRead(Y_PolitPin);
		if (Y_Val < minY) minY = Y_Val;
		if (Y_Val > maxY) maxY = Y_Val;
	}
	Serial.println("TEST OK...");
	delay(1000);
}

void loop ()                     
{
	int X_Val = 0 , Y_Val = 0; 
	
	//讀取X_Val串口可變電阻值(數值介於 0 到 1023)
	X_Val = analogRead(X_PolitPin);
	
	//把 0-1023 的數值按比例縮放為 0-180 的數值
	X_Val = map(X_Val , minX , maxX , 0 , 180);
	
	delay(vStep);  //與下個指令的間隔時間
	Serial.print(X_Val); Serial.print(" , ");		//顯示X軸值
	
	//讀取X_Val串口可變電阻值(數值介於 0 到 1023)
	Y_Val = analogRead(Y_PolitPin);
	
	//把 0-1023 的數值按比例縮放為 0-180 的數值
	Y_Val = map(Y_Val , minY , maxY , 0 , 180);
	
	delay(vStep);  //與下個指令的間隔時間
	Serial.println(Y_Val); 		//顯示Y軸值
}
