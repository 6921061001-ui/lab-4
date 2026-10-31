void setup() {
  Serial.begin(115200);

  // 1. นับขึ้นจาก 1 ถึง 10
  for (int count = 1; count <= 10; count++) {
    Serial.println(count);
    if (count == 5) {
      break;
    }
  }

  Serial.println("-------------------------");

  // 2. นับลงจาก 10 ถึง 1
  for (int count = 10; count >= 0; count--) {
    Serial.println(count);
    if(count == 7) {
      continue;
    }
  }

  Serial.println("-------------------------");
}

void loop() {
}