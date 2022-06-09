#include "stm32f4xx_hal.h"


#ifndef DHT11_H_
#define DHT11_H_


void DHT11_Start (void);
uint8_t DHT11_Check_Response (void);
uint8_t DHT11_Read (void);


#endif /* INC_DHT11_H_ */
