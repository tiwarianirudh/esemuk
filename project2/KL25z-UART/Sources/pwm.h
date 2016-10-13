//header file for PWM control
#ifndef SOURCES_PWM_H_
#define SOURCES_PWM_H_
typedef enum
{
	OFF,
	RED,
	YELLOW,
	GREEN,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
}LEDColour_t;
void LED_in();
void LED_ctrl(uint8_t Character);
void LEDFunction(LEDColour_t LEDColour, uint16_t Brightness);
void LED_set(char value);


#endif /* SOURCES_PWM_H_ */
