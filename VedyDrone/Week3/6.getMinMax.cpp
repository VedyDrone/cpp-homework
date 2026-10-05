#include <iostream>
using namespace std;

bool readArray(int[], int, int);
bool getMinMax(int[], int[], int, int &, int &);

int main() {
    const int SIZE = 5, ASCENDING = 1, DESCENDING = 2;
    int cnt, arr1[SIZE], arr2[SIZE], min = 0, max = 0;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        if (readArray(arr1, SIZE, ASCENDING) && readArray(arr2, SIZE, DESCENDING)) {
            if (getMinMax(arr1, arr2, SIZE, min, max)) {
                cout << "Min : " << min << ", Max : " << max << "\n";
            }
            else {
                cout << "ALL SAME : "<< min << "\n";
            }
        }
        else {
            cout << "[Error] Unsorted input\n";
        }
    }
    return 0;
}

bool readArray(int arr[], int size, int arrType){ // read도 해야 함.
    for (int i = 0; i < size; ++i){
        cin >> arr[i];
    }

    if (arrType == 1) {
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
    }
    else if (arrType == 2) {
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] < arr[i + 1]) {
                return false;
            }
        }
    }

    return true;
}

bool getMinMax(int arr1[], int arr2[], int size, int &min, int &max){
    min = arr1[0];
    if(min > arr2[size - 1]){
        min = arr2[size - 1];
    }
    
    max = arr1[size - 1];
    if(max < arr2[0]){
        max = arr2[0];
    }

    return (min != max);
}