/*
 * PinUtil.c
 *
 * Created: 03.05.2019 21:49:07
 *  Author: TK-A
 */ 

#include <avr/io.h>
#include "PinUtil.h"

port newPort(portName pName, char pNumber)
{
	port p;
	p.pName=pName;
	p.pNumber=pNumber;
	return p;
}

void pinMode(port p, portMode mode)
{
	if(mode == INPUT)
	{
		switch(p.pName)
		{
			case PB:
				DDRB	&=~	(1	<<	p.pNumber);
			break;
			case PC:
				DDRC	&=~	(1	<<	p.pNumber);
			break;
			case PD:
				DDRD	&=~	(1	<<	p.pNumber);
			break;
		}
	}
	else
	{
		switch(p.pName)
		{
			case PB:
				DDRB	|=	(1	<<	p.pNumber);
			break;
			case PC:
				DDRC	|=	(1	<<	p.pNumber);
			break;
			case PD:
				DDRD	|=	(1	<<	p.pNumber);
			break;
		}
	}
}

void pinWrite(port p, portState pState)
{
	if(pState == LOW)
	{
		switch(p.pName)
		{
			case PB:
				PORTB	&=~	(1	<<	p.pNumber);
				break;
			case PC:
				PORTC	&=~	(1	<<	p.pNumber);
				break;
			case PD:
				PORTD	&=~	(1	<<	p.pNumber);
				break;
		}
	}
	else
	{
		switch(p.pName)
		{
			case PB:
				PORTB	|=	(1	<<	p.pNumber);
				break;
			case PC:
				PORTC	|=	(1	<<	p.pNumber);
				break;
			case PD:
				PORTD	|=	(1	<<	p.pNumber);
				break;
		}
	}
}