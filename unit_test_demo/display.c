#include "display.h"

struct display
{
    volatile uint8_t *port;
};

display_t display_create(volatile uint8_t *port)
{
    *(port-1) = 0xff;
    *port = 0xff;
    display_t new_display = (display_t)malloc(sizeof(struct display));
    new_display->port = port;
    return new_display;
}

/*
 * Lights up led with provided number
 * number should be between 0 and 7
 */
void display_turn_on_led(display_t self, uint8_t number)
{

    *(self->port) &= ~(1<<number);
}
