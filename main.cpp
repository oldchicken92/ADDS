#include "Reverser.h"
#include <iostream>

int main(){
    Reverser reverse;
    std::string string = "name";
    
    std::string reverse_string = reverse.reverseString(string);
    std::cout << reverse_string << std::endl;

    int num = 5678;
    int reverse_num = reverse.reverseDigit(num);
    std::cout << reverse_num << std::endl;
    
    return 0;
}