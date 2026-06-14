#define ECHO_PIN 12
#define TRIG_PIN 13

#define PIN_LED1 8
#define PIN_LED2 7
#define PIN_LED3 6

#define PIN_BUZ 9
#define NOTE_C4 262

void setup()
{
    Serial.begin(115200);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    pinMode(PIN_LED1, OUTPUT);
    pinMode(PIN_LED2, OUTPUT);
    pinMode(PIN_LED3, OUTPUT);

    pinMode(NOTE_C4, INPUT_PULLUP);
    pinMode(PIN_BUZ, OUTPUT);
}

void loop()
{
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    int duration = pulseIn(ECHO_PIN, HIGH);
    int distance = duration / 58;

    if (distance > 100)
    {
        digitalWrite(PIN_LED3, HIGH);
        noTone(PIN_BUZ);

        digitalWrite(PIN_LED1, LOW);
        digitalWrite(PIN_LED2, LOW);
    }
    if (distance < 100 && distance > 30)
    {
        digitalWrite(PIN_LED2, HIGH);
        noTone(PIN_BUZ);

        digitalWrite(PIN_LED1, LOW);
        digitalWrite(PIN_LED3, LOW);
    }
    if (distance < 30)
    {
        digitalWrite(PIN_LED1, HIGH);
        tone(PIN_BUZ, NOTE_C4);

        digitalWrite(PIN_LED2, LOW);
        digitalWrite(PIN_LED3, LOW);
    }
}