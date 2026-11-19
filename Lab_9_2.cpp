// Лабораторна робота 9.2, частина 1. Директиви препроцесора. Варіант 9
//
//          | max^2(x*y^3, x+z),   z > 5
//      w = |
//          | min(x-y*z, x*y+z),   z <= 5
#include <iostream>
#include "macros.h"      
#include "output.h"
#include "variant9.h"
using namespace std;

// z задається на етапі препроцесингу (препроцесор не бачить значень, що вводяться під час роботи).
// Значення можна змінити тут або передати компілятору (/DZ=3).
#ifndef Z
#define Z 3
#endif

// препроцесор вибирає, яка гілка буде компілюватися
#if Z > 5
#define BRANCH "z > 5:  w = max^2(x*y^3, x+z)"
#else
#define BRANCH "z <= 5: w = min(x-y*z, x*y+z)"
#endif

int main()
{
    double x, y;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    PRINT(z, Z);
    cout << BRANCH << endl;

#if Z > 5
    double w = W_GT(x, y, Z);
#else
    double w = W_LE(x, y, Z);
#endif

    PRINT(w, w);
    PRINT(abs_w, ABS(w));
    PRINT(root_of_abs_w, ROOT(ABS(w)));
    PRINT(x_and_y_positive, AND(x > 0, y > 0));

    cin.get(); cin.get();
    return 0;
}
