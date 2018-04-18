
#ifndef DISPLAY_H_
#define DISPLAY_H_
#include <stdint.h>
#include <stdlib.h>

typedef struct display * display_t;

/*
 * Constructor of display.
 * The given port must be initialized beforehand
 */
display_t display_create(volatile uint8_t *port);

/*
 * Lights up led with provided number
 * number should be between 0 and 7
 */
void display_turn_on_led(display_t self, uint8_t number);



#endif /* DISPLAY_H_ */