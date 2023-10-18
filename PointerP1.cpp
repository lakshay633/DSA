#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout <<"the address of num storage is "<<&num<<endl;   // address of operator :- &
    
    int *ptr = &num;
    // int *ptr = 0;   other way to initialize or edit value of ptr
    // ptr = &num;      *p nahi hoga

    cout << "*ptr = "<<*ptr<<endl;      // derefernce operator :- *
    cout << "ptr = "<<ptr<<endl; 
    cout << "&ptr = "<<&ptr<<endl; 
    cout << "size of num = "<<sizeof(num)<<endl; 
    cout << "size of ptr = "<<sizeof(ptr)<<endl<<endl;

    double d = 11.1;
    double *p2 = &d;
    cout << "size of d = "<<sizeof(d)<<endl; 
    cout << "size of p2 = "<<sizeof(p2)<<endl;  // hence size of ptr is constant ... here 4, can also be 8

    return 0;
}
