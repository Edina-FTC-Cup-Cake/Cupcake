
const int M1A = 27;
const int M1B = 13;
const int M2A = 4;
const int M2B = 2;
const int M3A = 17;
const int M3B = 12;
const int M4A = 15;
const int M4B = 14;

void setMotor(int pina, int pinb, int percent, int maxduty = 200) {
    if (percent == 0) {
        analogWrite(pina, 0);
        analogWrite(pinb, 0);
        return;
    }
    percent = constrain(percent, -100, 100);
    maxduty = constrain(maxduty, 0, 200);
    int duty = map(abs(percent), 0, 100, 0, maxduty);
    if (percent > 0) {
        analogWrite(pina, duty);
        analogWrite(pinb, 0);
    } else {
        analogWrite(pina, 0);
        analogWrite(pinb, duty);
    }
}
void setupMotors() {
    pinMode(M1A, OUTPUT);
    pinMode(M1B, OUTPUT);
    pinMode(M2A, OUTPUT);
    pinMode(M2B, OUTPUT);
    pinMode(M3A, OUTPUT);
    pinMode(M3B, OUTPUT);
    pinMode(M4A, OUTPUT);
    pinMode(M4B, OUTPUT);
}
void setup() {
    setupMotors();
}
void loop() {

}