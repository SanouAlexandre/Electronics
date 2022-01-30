#include <IRremote.h>

int RECV_PIN = 5;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop() {
  if (irrecv.decode()) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
  delay(100);
}  