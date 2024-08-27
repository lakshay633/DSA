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
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &head, int d){
    Node *temp=head;
    while(temp->next!=NULL)temp = temp->next;
    temp->next = new Node(d);
// or you could use an another pointer like head to always pont at tail and just shift it as you add new element at tail (like we have done for LLdoubly)
}

void insertAtPosition(int posi, Node* &head, int d){
    if(posi==1){
        insertAtHead(head,d);
        return;
    }
    int i = 1;
    Node *temp=head;
    while (i<posi-1){
        temp= temp->next;
        i++;
    }
    if (temp->next==NULL){          // not needed but to handle all cases seperately
        insertAtTail(head,d);
        return;
    }
    
    Node *newN = new Node(d);
    newN->next=temp->next;
    temp->next=newN;    
}

void printll(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteAtPosition(int posi, Node* &head){
    Node *temp=head;
    if (posi==1){
        head=head->next;
        temp->next = NULL;
        return;
    }
    int cnt = 1;
    while (cnt<(posi-1)){
        temp = temp -> next;
        cnt++;
    }
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    toDelete->next=NULL;

}

void deleteByValue(int value, Node* &head){
    Node *temp=head;
    if(temp->data==value){
        head=head->next;
        temp->next = NULL;
        return;
    }
    temp=head;
    Node *toDel = temp->next;
    while(toDel->next!=NULL){
        if(toDel->data==value)break;
        temp = temp->next;
        toDel = toDel->next;
    }
    temp->next = toDel->next;
    toDel->next=NULL;
}

int main()
{
    Node *head = new Node(1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtTail(head,4);
    insertAtPosition(3,head,5);
    insertAtPosition(5,head,6);
    printll(head);
    deleteAtPosition(3,head);
    printll(head);
    deleteAtPosition(1,head);
    printll(head);
    deleteAtPosition(4,head);
    printll(head);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);
    printll(head);
    deleteByValue(7, head);
    printll(head);
    deleteByValue(2, head);
    printll(head);
    deleteByValue(1, head);
    printll(head);
    deleteByValue(8, head);
    printll(head);
    return 0;
}