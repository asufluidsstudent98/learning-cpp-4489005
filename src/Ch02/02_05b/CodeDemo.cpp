// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8; //int
    auto b = 12345678901; //long
    auto c = 3.14f; //float
    auto d  = 3.14; // double
    auto e = true; // bool
    auto f = 'd'; // char
    auto g = "C++ sucks!"; //pointer construct char (string)

    std::cout << "the type of a is " << typeid(a).name() << std::endl;
    std::cout << "the type of b is " << typeid(b).name() << std::endl;
    std::cout << "the type of c is " << typeid(c).name() << std::endl;
    std::cout << "the type of d is " << typeid(d).name() << std::endl;
    std::cout << "the type of e is " << typeid(e).name() << std::endl;
    std::cout << "the type of f is " << typeid(f).name() << std::endl;
    std::cout << "the type of g is " << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
