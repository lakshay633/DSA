#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout<<"initial value of num "<<num<<endl;    
    int *ptr = &num;
    int a = num;

    //difference betn editing a copy and a pointer
    a++;
    cout<<" value of a after a++ "<<a<<endl;
    cout<<" value of num after a++ "<<num<<endl;
    (*ptr)++;
    cout<<" value of num after (*ptr)++ "<<num<<endl<<endl;

    // copying a pointer
    int *q=ptr;
    cout<<*q <<" <-*q and *p-> "<<*ptr<<endl;
    cout<<q <<" <-q and p-> "<<ptr<<endl<<endl;

    cout <<"*ptr "<<*ptr<<endl;
    cout <<"*ptr = *ptr + 1 = "<<*ptr + 1<<endl;    // same as *ptr++
    cout <<"ptr "<<ptr<<endl;
    cout <<"ptr = ptr + 1 = "<<ptr + 1<<endl;    // size of datatype is added
    return 0;
}