// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter your name: " << flush;
    cin >> str;
    cout << "Nice to meet you, " << str << "!" << endl;

    cout << endl << endl;
    return (0);
}
