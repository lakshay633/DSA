#include <iostream>
using namespace std;

void merge(int *arr,int s ,int e){
    int mid = (s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *a=new int[len1];
    int *b=new int[len2];
    // copy values
    int mainArrayIndex=s;
    for (int i = 0; i < len1; i++){
        a[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for (int i = 0; i < len2; i++){
        b[i]=arr[mainArrayIndex++];
    }
    // merge
    int x=0,y=0;
    mainArrayIndex=s;
    while (x<len1 && y<len2){
        if (a[x]<b[y]){
            arr[mainArrayIndex++]=a[x++];
        }
        else{
            arr[mainArrayIndex++]=b[y++];
        }
    }
    while(x<len1){
        arr[mainArrayIndex++]=a[x++];
    }
    while(y<len2){
        arr[mainArrayIndex++]=b[y++];
    }
    delete []a;
    delete []b;
}

void ms(int *arr,int s,int e){
    if (s>=e){
        return;
    }    
    int mid = (s+e)/2;
    ms(arr,s,mid);
    ms(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int arr[]= {4,1,8,1,3,7,5,15,56,4,12};
    int n = (sizeof(arr)/4)-1;
    ms(arr,0,n);
    for (int i = 0; i <= n; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}