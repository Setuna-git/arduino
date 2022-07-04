#include <Wire.h>
#include <avr/sleep.h>

#define inPin 3
#define LED 13
/*#define LED 13*/
/*#define RTCaddress 0xa2 >> 1*/
//RTC8564のスレーブアドレスは『0xA2』固定だが、Wireライブラリでは7ビットでデバイス特定をするため、右に1ビットシフトさせて指定



void setup()
{

    pinMode(inPin, OUTPUT);           //2番をプルアップ設定
    pinMode(LED, OUTPUT);                   //13を出力設定(LED用)

    Serial.begin(9600);                     //siralの速度
    Serial.print("start!!\n---------------------------\n");

 
}

void loop()
{
    digitalWrite(inPin,HIGH);
    delay(15000);
    Serial.println("go Lora");
    digitalWrite(inPin,LOW);
    delay(15000);
}