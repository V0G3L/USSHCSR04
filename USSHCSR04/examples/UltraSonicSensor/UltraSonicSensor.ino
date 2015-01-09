#include <USSHCSR04.h>

USSHCSR04 *uss = new USSHCSR04((unsigned char)50,(unsigned char)51);

void setup() {
  Serial.begin(34800);
  uss->init();
}

int duration;
void loop() {
  duration = uss->measure();
  Serial.println(duration);
}
