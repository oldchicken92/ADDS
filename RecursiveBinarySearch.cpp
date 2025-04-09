#include "RecursiveBinarySearch.h"


bool RBS_helper(std::vector<int> list, int key, int start, int end){
    if (start > end) {
        return false;
    }
    int middle_index = (start + end)/2;
    
    if (list[middle_index] == key){
        return true;
    }else if (key < list[middle_index]){
        return RBS_helper(list, key, start, middle_index - 1);
    }else{
        return RBS_helper(list, key, middle_index + 1, end);
    }
    
}

bool RecursiveBinarySearch::search(std::vector<int> list, int key){
    if (list.size() < 1) {
        return false;
    }
    return RBS_helper(list, key, 0, list.size());
}
