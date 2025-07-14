// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int far = 100;
    int celsius;

    celsius = (float(5)/9.0)*(far-32);
    
    std::cout << std::endl;
    std::cout << "Fahrenheit: " << far << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    std::cout << std::endl;
    std::cout << "Float        : " << weight << std::endl;
    std::cout << "Integer      : " << (int) weight << std::endl;
    std::cout << "Fractional   : " << (int)((weight - (int) weight)*10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
