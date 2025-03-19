#include "Truckloads.h"

int numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1;
    }else{
        int p1 = numCrates/2; //get the two numCrates parts 
        int p2 = numCrates/2;

        numTrucks((numTrucks(numCrates, loadSize)),loadSize);
    }
}