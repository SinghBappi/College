#include<iostream>
using namespace std;

void seqsea(int arr[], int n, int var) {
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == var) {
            flag = true;
            cout << "Value found at index " << i << endl;
        }
    }
    if (!flag) {
        cout << "Value not found!" << endl;
    }
}

int main() {
    int n, k, a[100];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter a number to search: ";
    cin >> k;
    seqsea(a, n, k);
    return 0;
}