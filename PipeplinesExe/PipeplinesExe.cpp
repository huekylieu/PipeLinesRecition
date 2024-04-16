// PipeplinesExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\Application\Application.h"

int main()
{
    std::cout << "Modified cout\n"; //found it
    CoolClass coolClass;
    std::cout << "Calc " << coolClass.Calc(1, 2);
}

