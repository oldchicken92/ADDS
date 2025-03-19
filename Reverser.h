#ifndef REVERSER_H
#define REVERSER_H
#include <string>

class Reverser{
    public:
    int reverseDigit(int value);
    int reverseDigitHelper(int value, int num);
    std::string reverseString(std::string characters);
    std::string reverseStringHelper(std::string string, int start, int end);
};


#endif