#include <iostream>
using namespace std;

void readMatrix(int matrix[][100], int n, int m = 3) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}
void displayMatrix(int matrix[][100], int n, int m = 3) {
    cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    int matrix[100][100];
    cout << "Enter the number of columns (n): ";
    cin >> n;
    cout << "Enter the number of rows (m) : ";
    cin >> m;
    readMatrix(matrix, n, m);
    displayMatrix(matrix, n, m);

    return 0;
}
