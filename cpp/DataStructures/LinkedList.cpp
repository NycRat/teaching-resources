#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void printLinkedList (Node* node) {
    cout << node->data << " ";
    printLinkedList(node->next);
}

void push (struct Node** head, int nodeData) {
    struct Node* newNode = new Node;
    newNode->data = nodeData;
    newNode->next = *head;
    *head = newNode;
}

void append (struct Node** head, int nodeData) {
    struct Node* newNode = new Node;
    struct Node* last = *head;
    newNode->data = nodeData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
        return;
    }
    while (last->next != nullptr)
        last = last->next;
    last->next = newNode;
    return;
}



int main () {
    int n;
    cin >> n;
    int t;
    struct Node* head = nullptr;
    string action;
    for (int e=0; e<n; e++) {
        cin >> action;
        cin >> t;
        if (action == "push")
            push(&head,t);
        else if (action == "append")
            append(&head,t);

    }
    printLinkedList(head);

    

    return 0;
}
