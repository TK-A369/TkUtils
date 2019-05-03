/*
 * PinUtil.h
 *
 * Created: 03.05.2019 21:49:33
 *  Author: TK-A
 */ 


#ifndef PINUTIL_H_
#define PINUTIL_H_

typedef enum {PB, PC, PD} portName;

typedef enum {INPUT, OUTPUT} portMode;

typedef enum {HIGH, LOW} portState;

typedef struct
{
	portName pName;
	char pNumber;
} port;

#endif /* PINUTIL_H_ */