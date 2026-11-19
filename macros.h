// macros.h
// власний заголовний файл: математичні та логічні макроси
#pragma once
#include <cmath>

#define ABS(a)      (((a)<0)?-(a):(a))             // модуль (абсолютне значення)
#define SQR(a)      ((a)*(a))                      // квадрат
#define POW(a,n)    (std::pow((a),(n)))            // піднесення до степеня
#define ROOT(a)     (std::sqrt(a))                 // квадратний корінь
#define MAX(a,b)    (((a)>(b))?(a):(b))            // максимум
#define MIN(a,b)    (((a)<(b))?(a):(b))            // мінімум
#define AND(a,b)    ((a)&&(b))                     // логічне І

