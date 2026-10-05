#include <iostream>
using namespace std;

bool readAscSortedArray(int arr[], int size){
    for(int i = 0; i < size; ++i){
        cin >> arr[i];
    }
    for(int j = 0; j < size - 1; ++j){
        if(arr[j] > arr[j + 1]){
            return false;
        }
    }
    return true;
}

void mergeArray(int arr1[], int arr2[], int res[], int size){
    int arr1Idx = 0, arr2Idx = 0, resIdx = 0;
    for(; arr1Idx < size && arr2Idx < size; ++resIdx){
        if(arr1[arr1Idx] < arr2[arr2Idx]){
            res[resIdx] = arr1[arr1Idx];
            ++arr1Idx;
        }
        else{
            res[resIdx] = arr2[arr2Idx];
            ++arr2Idx;
        }
    }
    for(; arr1Idx < size; ++arr1Idx, ++resIdx){
        res[resIdx] = arr1[arr1Idx];
    }
    for(; arr2Idx < size; ++arr2Idx, ++resIdx){
        res[resIdx] = arr2[arr2Idx];
    }
}

void printArray(int res[], int size){
    for(int i = 0; i < size - 1; ++i){
        cout << res[i] << " ";
    }
    cout << res[size - 1] << "\n";
}