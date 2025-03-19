#include "Reverser.h"
#include "Truckloads.h"
#include <iostream>

int main(){
    Reverser reverse;
    std::string string = "name";
    
    std::string reverse_string = reverse.reverseString(string);
    std::cout << reverse_string << std::endl;

    int num = 5678;
    int reverse_num = reverse.reverseDigit(num);
    std::cout << reverse_num << std::endl;

    Truckloads truck;
    int number_trucks = truck.numTrucks(1024,5);
    std::cout << number_trucks << std::endl;

    return 0;
}