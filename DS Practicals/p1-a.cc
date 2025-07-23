#include <iostream>
#include <cstdlib>  // for exit()
using namespace std;

int a[20], n;

void create(int num);
void display(int num);
void search(int val);
void sort(int num);
void reverse();

int main() {
    int choice, ch, val;

    do {
        cout << "\nMenu\n";
        cout << "1. Create\n";
        cout << "2. Search\n";
        cout << "3. Reverse\n";
        cout << "4. Sort\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\nEnter the number of elements in the array: ";
                cin >> n;
                create(n);
                break;

            case 2:
                cout << "\nEnter the element to be searched: ";
                cin >> val;
                search(val);
                break;

            case 3:
                reverse();
                break;

            case 4:
                sort(n);
                break;

            case 5:
                exit(0);
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

        cout << "\nDo you want to continue? (1=Yes, 2=No): ";
        cin >> choice;

    } while (choice == 1);

    return 0;
}

void create(int num) {
    cout << "\nEnter " << num << " elements:\n";
    for (int i = 0; i < num; i++) {
        cin >> a[i];
    }
    cout << "\nArray created successfully.\n";
    display(num);
}

void display(int num) {
    cout << "Array elements: ";
    for (int i = 0; i < num; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void search(int val) {
    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            cout << "\nElement " << val << " found at index position " << i << endl;
            return;
        }
    }
    cout << "\nSearch unsuccessful. Element not found.\n";
}

void sort(int num) {
    int temp;
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\nArray sorted successfully.\n";
    display(num);
}

void reverse() {
    cout << "\nReversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
