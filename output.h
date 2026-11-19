// output.h
// власний заголовний файл: макроси виведення результатів
#pragma once
#include <iostream>

// виведення імені виразу та його значення
#define PRINT(name, val)  std::cout << #name << " = " << (val) << std::endl
