#include "Reverser.h"
#include <iostream>

int Reverser::reverseDigit(int value){
    if (value < 10){
        return - 1;
    }else{
        return reverseDigitHelper(value, 0);
    }
}

int Reverser::reverseDigitHelper(int value, int acc){
    if (value == 0){
        return acc;
    }else{
        int placeHolder = value % 10;
        value = (value - placeHolder)/10;
        acc = acc * 10 + placeHolder;
        return reverseDigitHelper(value, acc);
    }
}


std::string Reverser::reverseString(std::string characters){
    if (characters == ""){
        return "ERROR";
    }else{
        return reverseStringHelper(characters, 0, characters.size() - 1);
    }

}

std::string Reverser::reverseStringHelper(std::string str, int start, int end){
    if (start >= end){
        return str;
    }else{
        char temporary_start = str[start];
        str[start] = str[end];
        str[end] = temporary_start;
        return reverseStringHelper(str, start + 1, end - 1);
    }
}