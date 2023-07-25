//find the pivot of the array 
// eg. {1,2,3,4,5,6}=>{5,6,1,2,3,4} ==> 1 is the element and ans is its index that is 2


#include <iostream>
using namespace std;

int pivot(int arr[],int size){
    int s = 0,e = size - 1;
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    while (s<e){
        if (arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            return mid;
        }
        else if (arr[mid]<arr[0]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return s;
}
int main()
{
    int arr[]={5,6,1,2,3,4};
    int s = sizeof(arr)/4;
    int res = pivot(arr,s);
    cout<<res<<endl;
    return 0;
}