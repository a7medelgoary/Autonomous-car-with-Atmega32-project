#include "../../LIBRARY/BIT_MATH.h"
#include "../../LIBRARY/STD_TYPES.h"
#include "../../LIBRARY/ERR_TYPE.h"
#include "../../MCAL/DIO/DIO_interface.h"
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "SERVO_config.h"
#include "SERVO_interface.h"
#define Local_DelayValue				200


void SERVO_voidRotateToAngle(uint8 Copy_u8AngleValue){
	if (Copy_u8AngleValue <= 0)
		Copy_u8AngleValue = 1;
	DIO_u8SetPinValue(SERVO_u8_PORT, SERVO_u8_PIN, DIO_u8_PIN_HIGH);
	_delay_us(Local_DelayValue);
	DIO_u8SetPinValue(SERVO_u8_PORT, SERVO_u8_PIN, DIO_u8_PIN_LOW);
}
