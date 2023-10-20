#include <iostream>
using namespace std;

void update(int *p){
    p=p+1;
    cout<<"value of p in update function "<<p<<endl;    // copy of pointer is created and updated
    p--;
    *p = *p +1;
    cout<<"value of *p in update function "<<*p<<endl;  // value of num is updated becoz even copy of pointer points it only
}
void size(int arr[]){       
    cout<<"Size "<<sizeof(arr)<<endl;   // returns size of pointer and not array
}
// other way: void size2(int *arr){}
//benefits of this way is that you can take a part of array
// int partialSum(int *arr+i){}  to take all elements from ith index and onwards

int main()
{
    int num = 5;
    int *p = &num;
    cout << "value of p before update function "<<p<<endl;
    cout << "value of *p before update function "<<*p<<endl;
    update(p);
    cout << "value of p after update function "<<p<<endl;
    cout << "value of *p after update function "<<*p<<endl<<endl;

    int arr[10];
    size(arr);
    
    return 0;
}
