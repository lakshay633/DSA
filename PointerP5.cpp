#include <iostream>
using namespace std;
void update(int ** q){
    // q+=1;       //just the copy will change
    // *q+=1;      // value of p will increment
    **q+=1;     // value of num will increment
}
int main()
{
    int num = 5;
    int* p=&num;
    int** q=&p;
    
    // ways to print value of num
    cout<<num<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl<<endl;

    // ways to print address of num
    cout << & num<<endl;
    cout <<p<<endl;
    cout <<*q<<endl<<endl;
    
    // ways to print address of p
    cout << &p<<endl;
    cout <<q<<endl<<endl;

    // ways to print address of q
    cout << &q<<endl<<endl;

    cout <<"before function"<<endl;
    cout <<num<<endl;
    cout <<p<<endl;
    cout <<q<<endl;
    update(q);        // or update(&p)
    cout <<"after function"<<endl;
    cout <<num<<endl;
    cout <<p<<endl;
    cout <<q<<endl;
    return 0;
}
