/*
 * PinUtil.h
 *
 * Created: 03.05.2019 21:49:33
 *  Author: TK-A
 */ 


#ifndef PINUTIL_H_
#define PINUTIL_H_

typedef enum {PB, PC, PD} pinNames;

typedef enum {INPUT, OUTPUT} pinModes;

typedef enum {HIGH, LOW} pinStates;

typedef struct
{
	pinNames pName;
	char pNumber;
} pin;

extern pin newPin(pinNames pName, char pNumber);
extern void pinMode(pin p, pinModes mode);
extern void pinWrite(pin p, pinStates pState);

#endif /* PINUTIL_H_ */