#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString){
    std::list<int> result;
    for (char ch : numString) {
        if (isdigit(ch))
            result.push_back(ch - '0');
    }
    return result;
};

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin(), it2 = num2.rbegin();
    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend() || carry > 0) {
        int digit1 = (it1 != num1.rend()) ? *it1++ : 0;
        int digit2 = (it2 != num2.rend()) ? *it2++ : 0;
        int sum = digit1 + digit2 + carry;
        result.push_front(sum % 10);
        carry = sum / 10;
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    auto it1 = num1.rbegin(), it2 = num2.rbegin();
    int borrow = 0;

    while (it1 != num1.rend()) {
        int digit1 = *it1++ - borrow;
        int digit2 = (it2 != num2.rend()) ? *it2++ : 0;

        if (digit1 < digit2) {
            digit1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.push_front(digit1 - digit2);
    }

    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
   
    return result;
}