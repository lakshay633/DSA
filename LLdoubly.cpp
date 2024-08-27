#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head ->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(int posi, Node* &head, Node* &tail, int d){
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
    if (temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }  
    Node *newN = new Node(d);
    temp->next->prev=newN;
    newN->next=temp->next;
    newN->prev=temp;
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

int getLen(Node* &head){
    Node *temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void deleteAtPosition(int posi, Node* &head){
    Node *temp=head;
    if (posi==1){
        head=head->next;
        temp->next = NULL;
        head->prev = NULL;
        return;
    }
    int cnt = 1;
    while (cnt<(posi-1)){
        temp = temp -> next;
        cnt++;
    }
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete ->next){
        toDelete->next->prev = temp;
        toDelete->next = NULL;
    }
    toDelete->prev = NULL;
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
    Node *head = new Node(2);
    Node *tail = head; //will be initialized once at the 1st node and then handled by required functions as per need

    insertAtHead(head, 1);
    printll(head);
    cout<<"Current length is: "<<getLen(head)<<endl;

    insertAtPosition(1,head,tail,100);
    insertAtPosition(3,head,tail,101);
    insertAtPosition(5,head,tail,103);
    printll(head);

    deleteAtPosition(1,head);
    printll(head);
    deleteAtPosition(2,head);
    printll(head);
    deleteAtPosition(3,head);
    printll(head);

    return 0;
}