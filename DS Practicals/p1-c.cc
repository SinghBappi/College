#include <iostream>
using namespace std;
const int MAX = 10;

// To read matrix values
void read(int mat[MAX][MAX], int r, int c) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

// To display the matrix
void display(int mat[MAX][MAX], int r, int c) {
    cout << "Matrix:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}

// Addition of the matrices
void add(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            res[i][j] = a[i][j] + b[i][j];
}

// Multiplication of the matrices
void multiply(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Transpose of the matrices
void transpose(int mat[MAX][MAX], int res[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            res[j][i] = mat[i][j];
}

int main() {
    int choice;
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    do {
        cout << "\n1. Add \n2. Multiply\n3. Transpose \n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter rows and columns of matrices (same size): ";
                cin >> r1 >> c1;
                cout << "Matrix A:\n";
                read(mat1, r1, c1);
                cout << "Matrix B:\n";
                read(mat2, r1, c1);
                add(mat1, mat2, result, r1, c1);
                cout << "Result of Addition:\n";
                display(result, r1, c1);
                break;

            case 2:
                cout << "Enter rows and columns of Matrix A: ";
                cin >> r1 >> c1;
                cout << "Enter rows and columns of Matrix B: ";
                cin >> r2 >> c2;
                if (c1 != r2) {
                    cout << "Multiplication not possible! Columns of A must equal rows of B.\n";
                    break;
                }
                cout << "Matrix A:\n";
                read(mat1, r1, c1);
                cout << "Matrix B:\n";
                read(mat2, r2, c2);
                multiply(mat1, mat2, result, r1, c1, c2);
                cout << "Result of Multiplication:\n";
                display(result, r1, c2);
                break;

            case 3:
                cout << "Enter rows and columns of matrix: ";
                cin >> r1 >> c1;
                read(mat1, r1, c1);
                transpose(mat1, result, r1, c1);
                cout << "Transpose of the Matrix:\n";
                display(result, c1, r1);
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
