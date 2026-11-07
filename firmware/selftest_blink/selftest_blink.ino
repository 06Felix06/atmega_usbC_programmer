// ATmega USB-C Programmer - self test
//
// Blinks the on-board "TestLED" (D4 on the PCB, connected to Arduino pin D3)
// and prints a counter over the serial port.
//
// Use this after burning the bootloader onto the programmer's own ATmega328P
// to check that USB upload and the serial connection work.
//
// Arduino IDE settings:
//   Board:      Arduino Nano
//   Processor:  ATmega328P (Old Bootloader)
//   Jumpers:    all four on "Bootloader"

const uint8_t TEST_LED = 3;

void setup()
{
    pinMode(TEST_LED, OUTPUT);
    Serial.begin(9600);
    Serial.println("ATmega USB-C Programmer self test");
}

void loop()
{
    static unsigned long counter = 0;

    digitalWrite(TEST_LED, HIGH);
    delay(500);
    digitalWrite(TEST_LED, LOW);
    delay(500);

    Serial.println(counter++);
}
