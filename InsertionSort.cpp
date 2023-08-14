#include <iostream>
using namespace std;
int main()
{
    int arr[]={99,33,6,9,6 ,45,7,0};
    int n = sizeof(arr)/4;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >=0 ; j--)
        {
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}