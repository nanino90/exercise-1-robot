#include <stdint.h>
#include "functions.h"
#include "ReadSensor.h"


uint8_t ReadSensor()
{
	static uint8_t value=0;

	SPISensorEnable();

//	value = SPIRead();
++value;
	SPISensorDisable();

	return value;
}
