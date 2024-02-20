#include "../INTERRUPT/GIE_interface.h"
#include "../INTERRUPT/GIE_reg.h"
#include "../../LIBRARY/STD_TYPES.h"
#include "../../LIBRARY/BIT_MATH.h"


void GIE_voidEnableGlobal(void)
{
	__asm volatile("SEI");
}

void GIE_voidDisableGlobal(void)
{
	__asm volatile("CLI");
}
