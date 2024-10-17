#include <iostream>
using namespace std;

// Function to count negative numbers in an array
int countNegatives(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) count++;
    }
    return count;
}

// Function to find the maximum number in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// Function to reverse an array
void reverseArray(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to check if an array is a palindrome
bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) return false;
    }
    return true;
}

// Function to search for a number in an array
int searchNumber(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) return i;
    }
    return -1;
}

// Function to print unique numbers in an array
void printUniqueNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function to choose the desired operation
int main() {
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Count negative numbers" << endl;
    cout << "2. Find the maximum number" << endl;
    cout << "3. Reverse an array" << endl;
    cout << "4. Check if an array is a palindrome" << endl;
    cout << "5. Search for a number" << endl;
    cout << "6. Print unique numbers" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            int arr[5] = {-1, 2, -3, 4, -5};
            int size = sizeof(arr) / sizeof(arr[0]);
            cout << "Total negative numbers: " << countNegatives(arr, size) << endl;
            break;
        }
        case 2: {
            int arr[5];
            cout << "Enter 5 integers: ";
            for (int i = 0; i < 5; i++) {
                cin >> arr[i];
            }
            cout << "Maximum number: " << findMax(arr, 5) << endl;
            break;
        }
        case 3: {
            int arr[7];
            cout << "Enter 7 integers: ";
            for (int i = 0; i < 7; i++) {
                cin >> arr[i];
            }
            cout << "Reversed array: ";
            reverseArray(arr, 7);
            break;
        }
        case 4: {
            int arr[5];
            cout << "Enter 5 integers: ";
            for (int i = 0; i < 5; i++) {
                cin >> arr[i];
            }
            if (isPalindrome(arr, 5)) {
                cout << "The array is in palindrome order." << endl;
            } else {
                cout << "The array is not in palindrome order." << endl;
            }
            break;
        }
        case 5: {
            int arr[5] = {2, 4, 6, 8, 10};
            int num;
            cout << "Enter the number to search: ";
            cin >> num;
            int index = searchNumber(arr, 5, num);
            if (index == -1) {
                cout << num << " not found in the array" << endl;
            } else {
                cout << num << " found at index " << index << endl;
            }
            break;
        }
        case 6: {
            int arr[7] = {1, 2, 3, 2, 4, 5, 1};
            cout << "Unique numbers: ";
            printUniqueNumbers(arr, 7);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}

