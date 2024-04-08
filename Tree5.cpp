// iterative inorder and preorder
#include <iostream>
#include <stack>
using namespace std;

struct node
{
    struct node* left;
    int val;
    struct node* right;
};

typedef struct node node;

node* newNode(int num) {
    node* temp = (node*)malloc(sizeof(node));
    temp->val = num;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void iterativeInorder(node* root) {
    if (root == nullptr)
        return;

    stack<node*> st;
    node* curr = root;

    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->val << " ";
        curr = curr->right;
    }
}
void iterativePreorder(node* root){
    if(root == nullptr)
        return;        
    stack <node*> st;
    st.push (root);    
    while (!st.empty()){
        node* curr = st.top();
        st.pop();
        cout<<curr->val << " ";        
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
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

    cout << "Inorder of tree is ";
    iterativeInorder(root);
    cout<< endl;
    cout << "preorder of tree is ";
    iterativePreorder(root);
    cout<< endl;
    free(root->left->left->right);
    free(root->left->left->left);
    free(root->right->right);
    free(root->left->left);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
