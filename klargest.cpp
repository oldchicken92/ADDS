#include <vector>
#include <queue>
#include <iostream>

int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int, std::vector<int>, std::greater<int> > minHeap;

    for (size_t i = 0; i < values.size(); i++){
        minHeap.push(values.at(i));
        if (minHeap.size() > static_cast<size_t>(k)){
            minHeap.pop();
        }
    }

    return minHeap.top();
    
};