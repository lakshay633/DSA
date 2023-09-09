//Merge Sorted Array

#include <iostream>
using namespace std;
void merge(int arr1[],int arr2[],int arr3[]){
    int a=0,b=0;
    for (int i = 0; i < 8; i++)
    {
        if (arr1[a]<=arr2[b]||b>2)
        {
            arr3[i]=arr1[a];
            a++;
        }
        else
        {
            arr3[i]=arr2[b];
            b++;
        }
    }
}
int main()
{
    int arr1[5]={1,3,5,7,8};
    int arr2[3]={2,3,4};
    int arr3 [8]={0,0,0,0,0,0,0,0};
    merge(arr1,arr2,arr3);
    for (int  i = 0; i < 8; i++)
    {
        cout << arr3[i]<<" ";
    }
    return 0;
}