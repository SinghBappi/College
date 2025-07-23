#include <iostream>
using namespace std;

// Function to read elements into an array
void read(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to merge two arrays into one
void merge(int a[], int n1, int b[], int n2, int result[]) {
    for (int i = 0; i < n1; i++) {
        result[i] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        result[n1 + i] = b[i];
    }
}

// Function to sort an array
void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to display array elements
void show(int arr[], int n) {
    cout << "Merged Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[100], b[100], merged[200];
    int n1 = 0, n2 = 0, mergedSize = 0;
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Read Array 1\n";
        cout << "2. Read Array 2\n";
        cout << "3. Merge Arrays\n";
        cout << "4. Sort Merged Array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter size of first array: ";
                cin >> n1;
                read(a, n1);
                break;

            case 2:
                cout << "Enter size of second array: ";
                cin >> n2;
                read(b, n2);
                break;

            case 3:
                mergedSize = n1 + n2;
                merge(a, n1, b, n2, merged);
                show(merged, mergedSize);
                cout << "Arrays merged.\n";
                break;

            case 4:
                sort(merged, mergedSize);
                show(merged, mergedSize);
                cout << "Merged Array sorted.\n";
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
