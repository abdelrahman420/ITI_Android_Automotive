#include <iostream>
#include "Time.h"

int main() {
    
    Time T1;
    Time T2(10, 59, 59);
    Time T3(1, 1, 1);

    
    std::cout << "Time T1: ";
    T1.display();
    std::cout << "Time T2: ";
    T2.display();
    std::cout << "Time T3: ";
    T3.display();

    Time T4;
    T4.add_Time(T2, T3);

    
    std::cout << "Time T4 (T2 + T3): ";
    T4.display();

    return 0;
}
