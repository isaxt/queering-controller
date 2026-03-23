#define FSR_0 A0
#define FSR_1 A1
#define FSR_2 A2
#define FSR_3 A3
#define FSR_4 A4
#define FSR_5 A5

void setup() {
  Serial.begin(9600);
}

void loop() {

  int fsr0 = analogRead(FSR_0);
  int fsr1 = analogRead(FSR_1);
  int fsr2 = analogRead(FSR_2);
  int fsr3 = analogRead(FSR_3);
  int fsr4 = analogRead(FSR_4);
  int fsr5 = analogRead(FSR_5);

  Serial.print(fsr0); Serial.print(",");
  Serial.print(fsr1); Serial.print(",");
  Serial.print(fsr2); Serial.print(",");
  Serial.print(fsr3); Serial.print(",");
  Serial.print(fsr4); Serial.print(",");
  Serial.println(fsr5);   // 只有最后一个 println

  delay(400);
}