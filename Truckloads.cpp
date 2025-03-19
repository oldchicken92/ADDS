#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1;
    }else if (numCrates % 2 == 0){
        int part1 = numCrates/2; //get the two numCrates parts 
        int part2 = numCrates/2;

        return numTrucks(part1, loadSize) + numTrucks(part2, loadSize);
    }else{
        int part1 = (numCrates + 1)/2; //get the two numCrates parts 
        int part2 = (numCrates)/2;
        return numTrucks(part1, loadSize) + numTrucks(part2, loadSize);
    }
}

