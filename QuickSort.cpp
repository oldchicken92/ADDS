#include "QuickSort.h"
#include <vector>

int partition(std::vector<int>& list, int start, int end){
    int pivot = list.at(end); //select pivot as end
    int pivot_index = start - 1; //start has to be before list[0]
    for(int i = start; i < end; i++) {
        if (list.at(i) < pivot) {
            // swap ith element and element at pivot_index
            pivot_index++;
            std::swap(list[pivot_index], list[i]);
        }
    }
    std::swap(list[pivot_index + 1], list[end]);
    return pivot_index + 1;
}

void quickSort(std::vector<int>& list, int start, int end){
    if (start < end) {
        int pi = partition(list, start, end); //get pivot index
        quickSort(list, start, pi - 1);
        quickSort(list, pi + 1, end);
    }
}

//pick a pivot
std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;    
    }

    
       
    


    //quick sort
    /*
    pi is the pivot index
    void quickPartition (vector <int>, int low, int high){
    if (low +2) > high { //less than two elements
        return -1;
        pi = high
    }else {
    swap list[pi] & list[high]
    pivot = list[pi]
    i <- -1
    for j in range low, high-1{
    if list[j] < pivot
        i++;
        swap list[i] & list[j]
    }

    swap list[i+1] & list[pivot_index]
    pi = i+1
    return pi;
    
    
    }
    
    void quicksort (vector<int> list, int low, int high){
        part_i = quickPartion(list, low, high);
        quicksort(list, low, part_i - 1)
        quicksort (list, part_i + 1, high)
    }

    */