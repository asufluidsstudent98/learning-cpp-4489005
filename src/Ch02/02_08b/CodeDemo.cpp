// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGELENGTH 4

int main(){
    const size_t AGELENGTH = 4;
    int age [AGELENGTH];
    float temp[] = {31.5, 32.7, 38.9}; //will assign a list with constant length. assigns double but float recognizes (sometimes)

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age array has = " << AGELENGTH << " elements" << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;

    std::cout << std::endl;
    std::cout << "Temp[0] = " << temp[0] << std::endl;
    std::cout << "Temp[1] = " << temp[1] << std::endl;
    std::cout << "Temp[2] = " << temp[2] << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
