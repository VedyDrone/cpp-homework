#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 3;
void transpose(int[][SIZE], int[][SIZE], int);
void add(int[][SIZE], int[][SIZE], int[][SIZE], int);
void multiply(int[][SIZE], int[][SIZE], int[][SIZE], int);
void printMatrix(int[][SIZE], int);

int main(){
    int matrix1[SIZE][SIZE] = {{1,2,3},{4,5,6},{7,8,9}}, matrix2[SIZE][SIZE] = {{1,-1,0},{0,-1,1},{-1,1,0}};
    int transMatrix[SIZE][SIZE], sumMatrix[SIZE][SIZE], multiMatrix[SIZE][SIZE];

    transpose(matrix1, transMatrix, SIZE);
    cout << "Transpose\n";
    printMatrix(transMatrix, SIZE);

    add(matrix1, matrix2, sumMatrix, SIZE);
    cout << "Add\n";
    printMatrix(sumMatrix, SIZE);
    
    multiply(matrix1, matrix2, multiMatrix, SIZE);
    cout << "Multiplication\n";
    printMatrix(multiMatrix, SIZE);

    return 0;
}

void transpose(int orig[][SIZE], int transpose[][SIZE], int size){
    for(int row = 0; row < size; ++row){
        for(int col = 0; col < size; ++col){
            transpose[col][row] = orig[row][col];
        }
    }
}

void add(int matrix1[][SIZE], int matrix2[][SIZE], int res[][SIZE], int size){
    for(int row = 0; row < size; ++row){
        for(int col = 0; col < size; ++col){
            res[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    }
}

void multiply(int matrix1[][SIZE], int matrix2[][SIZE], int res[][SIZE], int size){
    for(int row = 0; row < size; ++row){
        for(int col = 0; col < size; ++col){
            res[row][col] = 0;
            for(int k = 0; k < size; ++k){
                res[row][col] += matrix1[row][k] * matrix2[k][col];
            }
        }
    }
}

void printMatrix(int matrix[][SIZE], int size){
    for(int row = 0; row < size; ++row){
        cout << "|";
        for(int col = 0; col < size; ++col){
            cout << setw(4) << matrix[row][col];
        }
        cout << "|\n";
    }
    cout << "\n";
}
