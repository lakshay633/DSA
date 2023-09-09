//https://www.codingninjas.com/studio/problems/reverse-the-array_1262298
//reversing an array after a position "m"

#include <iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    int m;
    cout <<"enter the value m "<<endl;
    cin>>m;
    int s=m+1;
    int e = n-1;
    for (; s <e; s++)
    {
        swap(arr[s],arr[e]);
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}