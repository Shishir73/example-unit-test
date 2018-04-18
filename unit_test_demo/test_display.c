#include "test_display.h"

static char * test_display_turnOnLed0()
{
    display_t display = display_create();
    display_turn_on_led(display, 0);
    int result = PORTA;
    mu_assert("result != 0b11111110 ", result == 0b11111110);
    return 0;
}

char * all_display_tests()
{
    mu_run_test(test_display_turnOnLed0);
    return 0;
}
