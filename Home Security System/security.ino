#include <UltrasonicHCSR04.h>
#include <LiquidCrystal_I2C.h>

#define PIN_TRIG 12
#define PIN_ECHO 11
#define SPEAKER_PIN 8

#define NOTE_C4 262
const int buttonPin = 4;
const int buttonTones = 262;

#define LCD_COL 16
#define LCD_ROW 2

LiquidCrystal_I2C lcd(0x27, LCD_COL, LCD_ROW);

void setup()
{
    Serial.begin(115200);
    pinMode(PIN_TRIG, OUTPUT);
    pinMode(PIN_ECHO, INPUT);

    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(SPEAKER_PIN, OUTPUT);

    lcd.init();
    lcd.backlight();
}

void loop()
{
    int pitch = 0;
    digitalWrite(PIN_TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(PIN_TRIG, LOW);

    int duration = pulseIn(PIN_ECHO, HIGH);

    pitch = buttonTones;
    if ((duration / 58) < 200)
    {
        Serial.println("Alert this is Warning");
        tone(SPEAKER_PIN, pitch);
        lcd.setCursor(7, 0);
        lcd.print("Alert!");
    }
    else
    {
        noTone(SPEAKER_PIN);
        lcd.print("");
    }

    delay(2000);
}
