//Search In Rotated Sorted Array
// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554

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

int bs(int arr[],int s,int e,int key){
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    while (s<=e){
        if(key == arr[mid]){
            return mid;
        }
        else if (key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return -1;
}

int search(int arr[],int size,int key){
    int p =pivot(arr,size);
    if(key>=arr[p]&&key<=arr[size-1]){
        return bs(arr,p,size-1,key);
    }
    else{
        return bs(arr,0,p-1,key);
    }  
}

int main()
{
    int arr[]={5,6,1,2,3,4};
    int size = sizeof(arr)/4;
    int res = search(arr,size,4);
    cout<<res<<endl;
    return 0;
}