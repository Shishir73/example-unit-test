#include "display.h"

struct display
{
};

display_t display_create()
{
    DDRA = 0xff;
    PORTA = 0xff;
    display_t new_display = (display_t)malloc(sizeof(struct display));
    return new_display;
}

/*
 * Lights up led with provided number
 * number should be between 0 and 7
 */
void display_turn_on_led(display_t self, uint8_t number)
{

    PORTA &= ~(1<<number);
}
