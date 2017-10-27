#ifndef _MAIN_
#define _MAIN_

#define		TESTING		1

#define 	CY_PORT 				5432
#define 	CONTROLS_TIMEOUT		5000
#define 	KNOB_COUNT 				8
#define 	KNOB_CHANGE_THRESHOLD 	3

#define		BTN_COUNT	4

#define		BTN_1		2 // Btn IO18 on daughter board
#define		BTN_2		1 // Btn IO17 on daughter board
#define		BTN_3		3 // Btn IO27 on daughter board
#define		BTN_4		0 // Btn IO4 on daughter board

extern bool gbBtnPressed[BTN_COUNT];

#endif
