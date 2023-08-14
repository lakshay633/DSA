#include <iostream>
using namespace std;
int main()
{
    int arr[]={19,8,17,6,15,40,0};
    int n = sizeof(arr)/4;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}