﻿#include <iostream>
#include <string>
#include <Windows.h>

#include "TestDynLib.h"


int main() {
	
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);


    std::cout << "Введите имя: ";
    std::string usrInpt;
    std::cin >> usrInpt;
    
    LeaverLib::Leaver User1(usrInpt);
    std::cout << User1.leave();

    return 0;
}

