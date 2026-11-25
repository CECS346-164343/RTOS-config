#ifndef I2C1_H
#define I2C1_H

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif

extern I2C_HandleTypeDef hi2c1;
void MX_I2C1_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* I2C1_H */
