#ifndef USART1_H
#define USART1_H

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif

extern UART_HandleTypeDef huart1;
void MX_USART1_UART_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* USART1_H */
