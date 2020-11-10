#include <bits/stdc++.h>
#include <iostream>
#include <cstddef>

using namespace std;

class Node {
    public:
        int data;
    Node * next;
};

void print_list(Node * n) {
    while(n!=NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

void insertAfter(struct Node * prev_node, int new_data) {
    if(prev_node == NULL) {
        cout << "Previous node cannot be NULL" << endl;
        return;
    }

    struct Node * new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}

void append(struct Node **headref, int new_data) {

    // construct new_node and start of linked list
    struct Node * new_node = (struct Node *) malloc(sizeof(struct Node));
    struct Node * last = *headref;

    // assign data to the newly added linked list
    new_node -> data = new_data;
    new_node -> next = NULL;

    // go to the end of linked list
    while(last->next  != NULL) {
        last = last->next;
    }

    // once reached end, append
    last -> next = new_node;
}

int main() {
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    cout << "Before Appending List ...\n";
    print_list(head);
    cout << "\nAfter Appending List ...\n";
    append(&head, 12);
    print_list(head);
    cout << "\nAfter Inserting List ...\n";
    insertAfter(third, 13);
    print_list(head);
}
