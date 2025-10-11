#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void hanoi(char source, char destination, char auxiliary, int n) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    hanoi(source, auxiliary, destination, n - 1); // Move n-1 disks to auxiliary
    cout << "Move disk " << n << " from " << source << " to " << destination << endl; // Move largest disk
    hanoi(auxiliary, destination, source, n - 1); // Move n-1 disks to destination
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "\nThe sequence of moves:\n";
    hanoi('A', 'B', 'C', n); // A = source, B = destination, C = auxiliary

    return 0;
}