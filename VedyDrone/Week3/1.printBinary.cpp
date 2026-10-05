#include <iostream>
using namespace std;

int toBinary(int decimal, short arr[], int size);
void printBinary(int idx, short arr[], int size);

int main(){
    const int SIZE = 32;
    int num, decimal;
    cin >> num;

    for(int i = 0; i < num; ++i){
        cin >> decimal;
        short binaryArr[SIZE] = {};
        int arrIdx = toBinary(decimal, binaryArr, SIZE);
        printBinary(arrIdx, binaryArr, SIZE);
    }
}

int toBinary(int decimal, short arr[], int size){
    if(decimal == 0){
        return size - 1;
    }
    int binaryArrIdx = size - 1;
    for (; decimal > 0; --binaryArrIdx, decimal /= 2){
        arr[binaryArrIdx] = decimal % 2;
    }
    return binaryArrIdx + 1;
}

void printBinary(int idx, short arr[], int size){
    for(int i = idx; i < size; ++i){
        if(i % 4 == 3){
            cout << arr[i] << " ";
        }
        else{
            cout << arr[i];
        }
    }
    cout << "\n";
}