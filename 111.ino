void setup() {
  Serial.begin(9600);  // 設定序列通訊速率
}

void loop() {
  int sensorValue = analogRead(A0);  // 讀取可變電阻的值（範圍 0~1023）
  Serial.println(sensorValue);       // 傳送值到序列埠
  delay(20);                         // 稍微延遲，避免傳送太快
}
