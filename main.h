#ifndef _MAIN_
#define _MAIN_

#define		TESTING		1

#define 	CY_PORT 				5432
#define 	CONTROLS_TIMEOUT		5000
#define 	KNOB_COUNT 				8
#define 	KNOB_CHANGE_THRESHOLD 	3

#define		BTN_COUNT	4

#define		BTN_IO4		0
#define		BTN_IO17	1
#define		BTN_IO18	2
#define		BTN_IO27	3

extern bool gbBtnPressed[BTN_COUNT];

#endif
