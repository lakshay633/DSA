#include <iostream>
using namespace std;

struct node
{
    struct node* left;
    int data;
    struct node* right;
};

typedef struct node node;

node* newNode(int num) {
    node* temp = (node*)malloc(sizeof(node));
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int counter(node* root) {
    if (root == NULL) {
        return 0;
    } else {
        return 1 + counter(root->left) + counter(root->right);
    }
}

int main() {
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    cout << "Number of nodes is " << counter(root) << endl;

    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
