#include<iostream>

using namespace std;

/* A binary tree has data, pointer to the left child,
 * pointer to the right child */
struct Node {
    int data;
    struct Node *left, *right;

    Node(int data) {
        this -> data = data;
        left = right = NULL;
    }
};

void printPostorder(struct Node* node) {
    if (node == NULL) {
        return;
    }

    // first recur on left subtree
    printPostorder(node -> left);

    // second recur on right subtree
    printPostorder(node -> right);

    // now deal with the node
    cout << node -> data << " ";
}

void printPreorder(struct Node* node) {
    if (node==NULL)
        return;
    // first print of node data
    cout << node -> data << " ";

    // then recur on the left node
    printPreorder( node -> left);

    // now recur on the right node
    printPreorder( node -> right);

}
int main() {
    struct Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node (4);
    root -> left -> right = new Node (5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}
