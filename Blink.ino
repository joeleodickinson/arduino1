void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(4000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(4000);
}