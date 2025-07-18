// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;

    char array_str1[25] = "Hey All. ";
    char array_str2[] = "what up?";

    std::string std_str1 = "howdy. ";
    std::string std_str2 = "how they going?";

    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
