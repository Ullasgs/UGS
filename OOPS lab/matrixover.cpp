#include <iostream>

using namespace std;

int row = 3;
int col = 3;

class matrix {
private:
    int mat[row][col];

public:
    matrix() {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                mat[i][j] = 0;
            }
        }
    }

    bool operator==(matrix& other) {
        return (row == other.row && col == other.col);
    }

    matrix operator+(matrix& other) {
        matrix result;

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }

        return result;
    }

    matrix operator-(matrix& other) {
        matrix result;

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }

        return result;
    }

    void input() {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                cin >> mat[i][j];
            }
        }
    }

    void display(string& matrixName) {
        cout << "matrix " << matrixName << ":" << endl;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    matrix M1, M2, M3, M4;

    M1.input();
    M2.input();

    if (M1 == M2) {
        M3 = M1 + M2;
        M4 = M1 - M2;

        M1.display("M1");
        M2.display("M2");
        M3.display("M3 (Sum of M1 and M2)");
        M4.display("M4 (Difference of M1 and M2)");
    } else {
        cout << "Matrices are not compatible for addition and subtraction." << endl;
    }

    return 0;
}
