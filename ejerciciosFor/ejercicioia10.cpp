#include <iostream>

using namespace std;

#define MAX_SIZE 5

int matrix[MAX_SIZE][MAX_SIZE];
int transpose[MAX_SIZE][MAX_SIZE];
int rows, cols;

void input() {
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void transposeMatrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void display() {
    cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int option;

    while (true) {
        cout << "1. Enter matrix elements" << endl;
        cout << "2. Transpose matrix" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                input();
                break;
            case 2:
                transposeMatrix();
                display();
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}