/*
 * PinUtil.c
 *
 * Created: 03.05.2019 21:49:07
 *  Author: TK-A
 */ 

#include <avr/io.h>
#include "PinUtil.h"

pin newPin(pinNames pName, char pNumber)
{
	pin p;
	p.pName=pName;
	p.pNumber=pNumber;
	return p;
}

void pinMode(pin p, pinModes mode)
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

void pinWrite(pin p, pinStates pState)
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