/*
 * RC_Car.c
 *
 * Created: 13/10/2024 13:35:49
 * Author : Esraa Ali
 */ 

#include "../LIB/STD_TYPE.h"
#include "../LIB/BIT_MATH.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/UART/UART_interface.h"
#include "../HAL/DCMOTOR/DCMOTOR_interface.h"

int main(void)
{
	DIO_voidSetPinDir(DIO_PORTD,DIO_PIN0,INPUT);
    DCMOTOR_voidInit();
	UART_voidInit();
	u8 command;
    while (1) 
    {
		command = UART_u8RX();
		switch(command){
			case 'F':
			case 'f':
				DCMOTOR_voidForward();
				break;
			
			case 'B':
			case 'b':
				DCMOTOR_voidBackword();
				break;
			
			case 'R':
			case 'r':
			DCMOTOR_voidRight();
			break;
			
			case 'l':
			case 'L':
			DCMOTOR_voidLeft();
			break;
			
			case 'S':
			case 's':
			DCMOTOR_voidStop(FIRST_MOTOR_ID);
			DCMOTOR_voidStop(SEC_MOTOR_ID);
			
			break;
			
		}
    }
}

