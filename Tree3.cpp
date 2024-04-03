// leaf, non-leaf and full node counter

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

int nonleafCounter(node* root) {
    if(root&&(root->left || root->right)){
        return 1+nonleafCounter(root->left) + nonleafCounter(root->right);
    }
    return 0;
}
int leafCounter(node* root) {
    if(!root){
        return 0;
    }
    else if (!(root->left) && !(root->right))
    {
        return 1;
    }
    return leafCounter(root->left) + leafCounter(root->right);
}
int fullCounter(node* root) {
    if (!root) return 0;
    else if (root->left && root->right) return 1 + fullCounter(root->left) + fullCounter(root->right);
    return fullCounter(root->left) + fullCounter(root->right);        
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
    root->right->right->left = newNode(8);
    root->right->right->right = newNode(9);

	// 		   1
	//        / \
	//       2   3 
    //      /     \
	//     4       5  
    //    / \     / \
    //   6   7   8   9 

    cout << "Number of leaf nodes is " << leafCounter(root) << endl;
    cout << "Number of non-leaf nodes is " << nonleafCounter(root) << endl;
    cout << "Number of full leaf nodes is " << fullCounter(root) << endl;

    free(root->left);
    free(root->right);
    free(root);

    return 0;
}