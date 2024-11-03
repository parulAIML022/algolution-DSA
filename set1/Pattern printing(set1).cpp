#include <iostream>
using namespace std;

// Function to print the Parallelogram pattern
void printParallelogram(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < cols; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print the Half Diamond pattern
void printHalfDiamond(int cols) {
    for (int i = 1; i <= cols; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = cols - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print the Diamond pattern
bool printDiamond(int rows) {
    if (rows % 2 == 0) {
        cout << "Error: The number of rows must be odd." << endl;
        return false;
    }

    int n = rows / 2;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return true;
}

// Function to print the alternating number pattern
void printNumberPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= cols; j++) {
                cout << j;
            }
        } else {
            for (int j = cols; j >= 1; j--) {
                cout << j;
            }
        }
        cout << endl;
    }
}

// Function to print the Hollow Square pattern
void printHollowSquare(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
}

// Function to print the Incremental Pattern
void printIncrementalPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            cout << j;
        }
        for (int k = 0; k < i - 1; k++) {
            cout << rows;
        }
        cout << endl;
    }
}

int main() {
    int choice, rows, cols;

    cout << "Choose the pattern to print:\n";
    cout << "1. Parallelogram\n";
    cout << "2. Half Diamond\n";
    cout << "3. Diamond\n";
    cout << "4. Alternating Number Pattern\n";
    cout << "5. Hollow Square\n";
    cout << "6. Incremental Pattern\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the number of rows and columns for Parallelogram: ";
            cin >> rows >> cols;
            printParallelogram(rows, cols);
            break;
        case 2:
            cout << "Enter the number of columns for Half Diamond: ";
            cin >> cols;
            printHalfDiamond(cols);
            break;
        case 3:
            cout << "Enter an odd number of rows for Diamond: ";
            cin >> rows;
            if (!printDiamond(rows)) {
                cout << "Invalid input for Diamond pattern.\n";
            }
            break;
        case 4:
            cout << "Enter the number of rows and columns for Number Pattern: ";
            cin >> rows >> cols;
            printNumberPattern(rows, cols);
            break;
        case 5:
            cout << "Enter the number of rows and columns for Hollow Square: ";
            cin >> rows >> cols;
            printHollowSquare(rows, cols);
            break;
        case 6:
            cout << "Enter the number of rows for Incremental Pattern: ";
            cin >> rows;
            printIncrementalPattern(rows);
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 6.\n";
    }

    return 0;
}

