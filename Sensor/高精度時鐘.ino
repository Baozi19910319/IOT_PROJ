//引用函式庫
#include <DS1302.h>

// DS1302 初始化設定
DS1302 rtc(6, 7, 8);

String dw = "";
  
void setup()
{
  //設定RTC執行模式，取消寫入保護
  rtc.halt(false);
  rtc.writeProtect(false);

  //啟動串列埠視窗
  Serial.begin(9600);

  //第一次設定寫入 DS1302 RTC時鐘，之後可以加上註解
  rtc.setDOW(MONDAY);      // 設定每週星期幾
  rtc.setTime(19, 32, 00);      // 設定24小時時間 hh:mm:ss
  rtc.setDate(3, 5, 2022);      // 設定日期(日, 月, 年)
}

void loop()
{
  //取出資料：星期
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");

  //取出資料：日期
  Serial.print(rtc.getDateStr());
  Serial.print(" ");

  //取出資料：時間
  dw = rtc.getTimeStr();
  Serial.println(dw);

  delay(1000);
}
