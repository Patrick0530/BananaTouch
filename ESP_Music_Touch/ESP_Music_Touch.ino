/*******************************************************
   T0：GPIO 4
   T3：GPIO 15
   T4：GPIO 13
   T5：GPIO 12
   T6：GPIO 14
   T7：GPIO 27
   T8：GPIO 33
   T9：GPIO 32
*******************************************************/
#define TOUCH_PIN_0 4  // ESP32 Pin D4
#define TOUCH_PIN_3 15 // ESP32 Pin D15
#define TOUCH_PIN_4 13 // ESP32 Pin D13
#define TOUCH_PIN_5 12 // ESP32 Pin D12
#define TOUCH_PIN_6 14 // ESP32 Pin D14
#define TOUCH_PIN_7 27 // ESP32 Pin D27
#define TOUCH_PIN_8 33 // ESP32 Pin D33
#define TOUCH_PIN_9 32 // ESP32 Pin D32

// 將所有觸控感測腳位的編號放進一個陣列，方便用迴圈一次處理
const int touchPins[] = {
  TOUCH_PIN_0, 
  TOUCH_PIN_3, 
  TOUCH_PIN_4, 
  TOUCH_PIN_5, 
  TOUCH_PIN_6, 
  TOUCH_PIN_7, 
  TOUCH_PIN_8, 
  TOUCH_PIN_9
};

void setup()
{
  Serial.begin(115200);
  delay(1000);
  Serial.println("電容感測開始");
}
  
void loop()
{
  // 以迴圈去順序讀取每個電容引腳的數值並輸出成字串
  for (int i = 0; i < 8; i++) {
    Serial.print(":");
    Serial.print(touchRead(touchPins[i]));
  }
  Serial.println();
  
  delay(50);

}