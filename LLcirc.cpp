#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if (this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data = "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    // assuming that the element is present in the list and we have to add the new node after that

    // if 1st node
    if(tail==NULL){
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
        return;
    }
    //if non-empty 
    Node * curr = tail;
    while (curr->data!=element){
        curr = curr->next;
    }
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}

void print(Node* &tail){
    if (tail==NULL)
    {
        cout<<"EMPTY LL"<<endl;
    }
    
    Node *temp=tail;
    cout <<temp->data<< " ";
    while (temp->next != tail){
        temp = temp->next;
        cout << temp -> data <<" ";
    }
    cout<<endl;
}

void deleteNode(Node* &tail, int d){
    if (tail == NULL)
    {
        cout<< "the LL is empty";
        return;
    }
    Node *prev=tail;
    Node *curr=tail->next;
    while(curr->data!=d){
        prev = curr;
        curr = curr->next;
    }
    if(prev==curr){
        tail = NULL;
        return;
    }
    if(tail==curr)tail = prev;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

int main(){
    Node *tail = NULL;          // as it is a circular LL we just need a pointer irrespective of its location
    insertNode(tail,5,3);
    insertNode(tail,3,2);
    insertNode(tail,2,1);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 2);
    print(tail);
    deleteNode(tail, 1);
    print(tail);
    return 0;
}