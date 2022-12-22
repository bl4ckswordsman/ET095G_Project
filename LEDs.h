#include "mbed.h"


Ticker tick1, tick2, tick3, tick4;
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

void blink1() {
  led1 = !led1;
  wait(0.1);
}

void blink2() {
  led2 = !led2;
  wait(0.1);
}

void blink3() {
  led3 = !led3;
  wait(0.1);
}

void blink4() {
  led4 = !led4;
  wait(0.1);
}

void allLEDs() {
  tick1.attach(&blink1, 0.2); // Ticker that repeats interrupt (blink1) at specified rate(0.7)
  tick2.attach(&blink2, 0.2);
  tick3.attach(&blink3, 0.2);
  tick4.attach(&blink4, 0.2);
}


