#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//宣告lcd物件
LiquidCrystal_I2C lcd(0x3F,16,2); 	//預設0X3F，16字元，2行

void setup()
{
	lcd.init();          //初始化
	lcd.backlight();	 //開啟背光
	//lcd.cursor();	     //顯示底線游標
	lcd.noBlink();	  //游標不閃爍
	//lcd.blink();	  //游標方塊閃爍
}

void loop()
{
	lcd.clear();		        //清除畫面
	lcd.setCursor(2, 0);	    //移動到第1行,第1個字元的位置
	lcd.print("Hello World!");  //顯示一行字
	
	lcd.setCursor(4, 1);	    //移動到第2行,第5個字元的位置
	lcd.print("Welcome!");      //顯示一行字

	//延時五秒
	delay(5000);
}
