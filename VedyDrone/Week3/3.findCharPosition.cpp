#include <iostream>
using namespace std;

void printCharPosition(char str[], int MAX_LEN);

int main(){
    const int STR_MAX_LEN = 100;
    char myCharArr[STR_MAX_LEN + 1];

    cin >> myCharArr;
    printCharPosition(myCharArr, STR_MAX_LEN);
    
    return 0;
}

void printCharPosition(char str[], int MAX_LEN){
    const int ALPHABET_CNT = 26;
    int alphabetFirstPosition[ALPHABET_CNT] = {};

    for(int pos = 0; pos < MAX_LEN && str[pos] != '\0'; ++pos){
        // str[pos] - 'a' = 이번 문자의 알파벳 배열의 인덱스
        int firstPosIdx = str[pos] - 'a';
        if(alphabetFirstPosition[firstPosIdx] == 0){
            alphabetFirstPosition[firstPosIdx] = pos + 1;
        }
    }

    for(int i = 0; i < ALPHABET_CNT; ++i){
        cout << alphabetFirstPosition[i] << " ";
    }

}