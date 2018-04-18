#include "test_display.h"

static char * test_display_turnOnLed0()
{
    volatile uint8_t result = 0;
    display_t display = display_create(&result);
    display_turn_on_led(display, 0);
    mu_assert("result != 0b11111110 ", result == 0b11111110);
    return 0;
}

static char * test_display_turnOnLed1()
{
    volatile uint8_t result = 0;
    display_t display = display_create(&result);
    display_turn_on_led(display, 1);
    mu_assert("result != 0b11111110 ", result == 0b11111101);
    return 0;
}

char * all_display_tests()
{
    mu_run_test(test_display_turnOnLed0);
    mu_run_test(test_display_turnOnLed1);

    return 0;
}
