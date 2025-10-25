#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void displayList(Node* head) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    cout << "Linked list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void searchList(Node* head, int key) {
    Node* temp = head;
    int pos = 1;
    bool found = false;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Element " << key << " found at position " << pos << endl;
            found = true;
            break; 
        }
        temp = temp->next;
        pos++;
    }

    if (!found) {
        cout << "Element " << key << " not found in the list.\n";
    }
}

int main() {
    Node* head = NULL;
    int n, value, key;

    cout << "Enter the number of Nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insertEnd(head, value);
    }

    displayList(head);

    cout << "Enter the value to search in the list: ";
    cin >> key;
    searchList(head, key);

    return 0;
}
