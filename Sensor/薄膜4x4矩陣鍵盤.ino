#include <Keypad.h>		//引用函數庫
 
const byte ROWS = 4;	//Row數
const byte COLS = 4;	//Column數

//定義按鍵按隙後要顯示的字
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {11, 10, 9, 8};		//定義Row的腳位
byte colPins[COLS] = {7, 6, 5, 4};		//定義Column的腳位
 
//宣告物件
//參數一 : 按鍵被按下後要顯示的字
//參數二 : Row腳位
//參數三 : Column腳位
//參數四 : Row數
//參數五 : Column數
Keypad customKeyPad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
 
void setup()
{
	Serial.begin(9600);
}
   
void loop()
{
	//讀取被按下的按鍵
	char customKey = customKeyPad.getKey();

	if (customKey)
	{
		Serial.println(customKey);
	}
}
