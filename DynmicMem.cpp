#include <iostream>
using namespace std;
int main()
{
    // there are 2 type of memory alloted to every program ... stack(smaller in size ... depending on how much is told at compile time it can increase size but if forcefully array is made for run time size then and given a really big size then it will crash program) and heap.
    // till now we used only stack memory while allocating fixed memory during compile time, for variables and array.
    // for using heap memory new keyword is used
    char c = 'a'; // stack
    char* p1 = &c;
    cout << c<<endl;
    cout << sizeof(c)<<endl;
    cout << sizeof(p1)<<endl<<endl;

    cout << new char<<endl;
    // "new char" returns a memory address that is dynamically allocated and it cant b named 
    // that is why we use poiters to do so
    char * ch = new char;
    *ch=c;
    cout << ch<<endl;
    cout << sizeof(ch)<<endl<<endl;
    // DIFFERENCE 1: So to make accesible variable or data type in dynamic memory would take extra storage of pointer because stack's char c dont need p1 to be accessed but ch on other hand needs pointer too     

    // dynamic array
    int n;
    cin >> n;
    int * arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout << sum <<endl;
    // total size here for this dynamic array would be = int X n + size of pointer(ie int *arr)
    
    // DIFFERENCE 2: There is aute cleaning for stacks memory 
    // while (true)
    // {
    //     int n = 5;
    // }
    // it would run infinite time but without taking any space as it would delete after one run of loop
    // BUT in heap ... space for pointer would be cleared (as that is allocated in stack) but the space for variable wont .. it will keep allocating space for that 
    // while (true)
    // {
    //     int * n = new int;
    // }
    // for emptying space we have to use delete
    delete ch;
    delete []arr;

    return 0;  
}