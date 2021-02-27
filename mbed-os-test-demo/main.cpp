#include "mbed.h"

DigitalOut myled1(LED3);
DigitalOut myled2(LED1);

int main()
{
    int i;
    
    myled1 = 1;
    myled2 = 1;

    while (1) {
        for (i = 0; i < 6; i++) {
            myled1 = !myled1;
            ThisThread::sleep_for(100ms);
        }
        for (i = 0; i < 4; i++) {
            myled2 = !myled2;
            ThisThread::sleep_for(100ms);
        }

    }
}


