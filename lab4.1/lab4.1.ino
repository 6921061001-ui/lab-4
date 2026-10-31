int BT = 17;
int BZ = 13;
void setup() {
  Serial.begin(115200);
  pinMode(BT, OUTPUT);
  //pinMode(BZ, OUTPUT);
  int count = 1;
  while (count <= 10) {
    digitalWrite(BT, LOW);  //ติด
    analogWrite(BZ, 4096);  //ติด
    delay(600);
    digitalWrite(BT, HIGH);  //ดับ
    analogWrite(BZ, 0);  //ดับ
    delay(600);
    Serial.println(count);
    count++;
  }
}

void loop() {
}
