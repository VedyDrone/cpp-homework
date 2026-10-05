#include <iostream>
using namespace std;

int main(){
    int num1, num2, result = 0;
    const int SIZE = 3;
    int arr[SIZE];

    cin >> num1 >> num2;

    for(int i = 0, place = 1; i < SIZE; ++i){
        arr[i] = num1 * (num2 % 10);
        cout << arr[i] << "\n";
        result += arr[i] * place;

        num2 /= 10;
        place *= 10;
    }
    cout << result << "\n";
}