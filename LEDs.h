// ET 095G : Project
// Amarildo Rajta
#include "mbed.h"

float LEDdelay1 = 0.07;
float LEDdelay2 = 0.3;

Ticker tick1, tick2;
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

/*PwmOut red(p23);
PwmOut green(p24);
PwmOut blue(p25);*/


void blink4LEDs() {
  led1 = !led1;
  wait(LEDdelay1);
  led2 = !led2;
  wait(LEDdelay1);
  led3 = !led3;
  wait(LEDdelay1);
  led4 = !led4;
  wait(LEDdelay1);
}

void RGB() {
  DigitalOut red(p23);
  DigitalOut green(p24);
  DigitalOut blue(p25);

  red = !red;
  wait(LEDdelay2);
  red = !red;
  wait(LEDdelay2);
  green = !green;
  wait(LEDdelay2);
  green = !green;
  wait(LEDdelay2);
  blue = !blue;
  wait(LEDdelay2);
  blue = !blue;
}

/*void blinkR() {
  red = !red;
  wait(0.2);
}

void blinkG() {
  green = !green;
  wait(0.2);
}

void blinkB() {
  blue = !blue;
  wait(0.2);
}*/

/*LEDs to blink when a new highscore is reached*/
void HSLEDs() {
  tick1.attach(&blink4LEDs, LEDdelay1); // Ticker that repeats interrupt
                                        // (blink1) at specified rate(0.2)
tick2.attach(&RGB, LEDdelay2);
  /*PwmOut red(p23);
  PwmOut green(p24);
  PwmOut blue(p25);

  red.write(0.2f);
  red.period(0.001);
  red.pulsewidth(0.3);
  wait(0.5);

  green.write(0.2f);
  green.period(0.001);
  green.pulsewidth(0.3);
  wait(0.5);

  blue.write(0.2f);
  blue.period(0.001);
  blue.pulsewidth(0.3);*/
  
}
