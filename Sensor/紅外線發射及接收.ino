//需加入IR_Remote此Library
#include <IRremote.h>
#include <IRremoteInt.h>
 
int RECV_PIN = 7;				//紅外線接收器的訊號腳
IRrecv irrecv(RECV_PIN);		//宣告物件
decode_results ReceiveYN;
 
void setup()
{
	Serial.begin(9600);
	irrecv.enableIRIn();		//初始化
}
 
void loop() 
{
	//如果有接收到資料
	if (irrecv.decode(&ReceiveYN))
	{
		Serial.println(ReceiveYN.value, HEX);		//輸出接收到的資料
		Serial.println();
		irrecv.resume(); 							//等待接收下個指令
	}
}
