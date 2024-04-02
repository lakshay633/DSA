#include <iostream>
using namespace std;

struct node
{
    struct node* left;
    int data;
    struct node* right;
};
typedef struct node node;

void inorder(node* root) {          // left root right
    if (root) {
        inorder(root->left);
        cout << root->data << " "; // Print space after each data for clarity
        inorder(root->right);
    }
}

void preorder(node* root) {         // root left right 
    if (root) {
        cout << root->data << " "; // Print space after each data for clarity
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root) {        // left right root
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " "; // Print space after each data for clarity
    }
}

int main() {
    node* root = (node*)malloc(sizeof(node)); // Allocate memory for the root
    root->left = (node*)malloc(sizeof(node)); // Allocate memory for the left child
    root->right = (node*)malloc(sizeof(node)); // Allocate memory for the right child
    root->data = 1;
    root->left->data = 2;
    root->right->data = 3;
    root->left->left = NULL; // Initialize left child's left and right pointers to NULL
    root->left->right = NULL;
    root->right->left = NULL; // Initialize right child's left and right pointers to NULL
    root->right->right = NULL;

    // Print traversals
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    // Free allocated memory
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
