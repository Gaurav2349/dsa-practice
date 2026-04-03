#include <iostream>
using namespace std;

// Define Node
struct Node {
    int data;
    Node* next;
};

// Function to reverse linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;   // store next
        curr->next = prev;   // reverse link
        prev = curr;         // move prev
        curr = next;         // move curr
    }

    return prev; // new head
}

// Helper function to insert at end
Node* insert(Node* head, int val) {
    Node* newNode = new Node{val, NULL};

    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    cout << "Original: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed: ";
    printList(head);

    return 0;
}
