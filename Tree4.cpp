// height of a binary tree
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
int treeHeight(node* root){
    if(!root)return 0;
    else {
        // Recursively calculate the height of the left and right subtrees
        int leftHeight = treeHeight(root->left);
        int rightHeight = treeHeight(root->right);

        // Return the maximum height of the left and right subtrees, plus 1 for the root
        return 1 + max(leftHeight, rightHeight);
    }
}
int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->right = newNode(5);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(7);

	// 		   1
	//        / \
	//       2   3 
    //      /     \
	//     4       5  
    //    / \   
    //   6   7  

    cout << "height of tree is " << treeHeight(root)-1 << endl;         // -1 for starting with 0

    free(root->left);
    free(root->right);
    free(root);

    return 0;
}