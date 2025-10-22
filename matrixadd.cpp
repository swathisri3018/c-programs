#include <iostream>
using namespace std;
int main() {
    const int SIZE = 3;
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];
    cout << "Enter elements of first 3x3 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "\nEnter elements of second 3x3 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
       for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << sum[i][j] << "\t";
        }
        cout << std::endl;
    }
    return 0;
}
