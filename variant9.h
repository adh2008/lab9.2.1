// variant9.h
// власний заголовний файл: макроси варіанту 9
#pragma once
#include "macros.h"

// w = max^2(x*y^3, x+z) при z > 5;  min(x-y*z, x*y+z) при z <= 5
#define W_GT(x,y,z)  SQR(MAX((x)*POW((y),3), (x)+(z)))
#define W_LE(x,y,z)  MIN((x)-(y)*(z), (x)*(y)+(z))
