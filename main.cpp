#include <iostream>
#include <sstream>
#include "Sort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main(){
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    std::vector<int> list;
    int num;
    while (iss >> num){
        list.push_back(num);
    }

    QuickSort quick_sort;
    list = quick_sort.sort(list);

    RecursiveBinarySearch RBS;
    bool test = RBS.search(list, 1);

    std::cout << (test ? "true" : "false");

    for (int i : list){
        std::cout << " " << i;
    }
    std::cout << std::endl;


    return 0; 
}