#include <iostream>
using namespace std;
int main()
{
    int arr[10]={0,10,20,30,40,50,60,70,80,90};
    int *ptr= arr;
    cout << "address of 1st element of arr "<<arr<<endl;
    cout << "address of 1st element of arr "<<&arr[0]<<endl;
    cout << "address of 1st element of arr "<<&arr<<endl;
    cout << "address of 1st element of arr "<<ptr<<endl<<endl;
    
    cout << "1st element of arr "<<*arr<<endl;
    cout << "1st element of arr "<<*ptr<<endl;
    cout << "*arr+1= "<<*arr+1<<endl;       // 0th element +1
    cout << "*(arr+1)= "<<*(arr+1)<<endl<<endl;       // (0+1) element
    // arr[i] is internally eveluated as *(arr+i)

    cout <<"sizeof(ptr) "<<sizeof(ptr)<<endl;       // size of arr
    cout <<"sizeof(*ptr) "<<sizeof(*ptr)<<endl;     // size of 1st element
    cout <<"sizeof(&ptr) "<<sizeof(&ptr)<<endl;     // size of address of ptr

    cout <<"sizeof(arr) "<<sizeof(arr)<<endl;       // size of arr
    cout <<"sizeof(*arr) "<<sizeof(*arr)<<endl;     // size of 1st element
    cout <<"sizeof(&arr) "<<sizeof(&arr)<<endl<<endl;     // size of address of arr
    
    cout<<"ptr+1= "<<ptr+1<<endl<<endl;
    // but error if arr+1

    char ch[10] = "ABCDEFGHI";      // max no. of element will be 1 less than storage alloted (for null at the end)
    char *ptr2 = ch;
    cout << ptr2<<endl<<endl;

    char c = 'a';       
    char *ptr3 = &c;    // will give weird output ... prints all the content in memory till it finds a null character
    cout << ptr3<<endl<<endl;

    // two ways of initializing a char array
    char a[6] ="abcde";     // step 1. a temp momory is made to store the content 
                            // step 2. content is copied to memory allocated to a[6]
    char *b="abcde";        // a pointer b is made to point the temp memory
    // both are correct but the second one is risky and is not at all recommended
    return 0;
}