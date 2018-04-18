
#ifdef TEST

#define F_CPU   10000000L
#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "atmega2560_drivers.h"
#include "minunit.h"
#include "test_display.h"

int tests_run = 0;

static char * all_tests()
{
    mu_run_suite(all_display_tests);
    return 0;
}

int main()
{
    init_stdio(0, 10000000L);
    sei();
    printf("Initiating test...\n");

    char *result = all_tests();
    if (result != 0) {
        printf("error: %s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }

    printf("Tests run: %d\n", tests_run);

    _delay_ms(1000);
    return result != 0;
}
#endif