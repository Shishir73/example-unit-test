
#ifndef TEST

#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include "atmega2560_drivers.h"


int main(void)
{
    init_stdio(0, 10000000L);
    // you initialization code here...
    sei();
    // and then the rest of your program...
    printf("Initiating main program...\n");

    while (1)
    {
    }
}
#endif
