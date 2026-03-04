#define FSR_0 A0
#define FSR_1 A1
#define FSR_2 A2
#define FSR_3 A3

void setup() {
  Serial.begin(9600);
}

void loop() {

  int fsr0 = analogRead(FSR_0);
  int fsr1 = analogRead(FSR_1);
  int fsr2 = analogRead(FSR_2);
  int fsr3 = analogRead(FSR_3);

  Serial.print(fsr0);
  Serial.print(",");
  Serial.print(fsr1);
  Serial.print(",");
  Serial.print(fsr2);
  Serial.print(",");
  Serial.println(fsr3);

  delay(150); // 稍微稳定数据
}