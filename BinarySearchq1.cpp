//first and last occurance of an element in a sorted array
//link =>   https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549


#include <iostream>
using namespace std;
int bs(int arr[],int size,int key){
    int s = 0,e = size - 1;
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

int main()
{
    int arr[]={4,4,4,4,4,4,4,4,4,4,4,4};
    int mid = bs(arr,12,4);
    cout<<mid<<endl;
    int first=mid,last=mid;
    while (first>=0){
        if(arr[first-1]==arr[first]){
            first--;
        }
        else
        {
            break;
        }  
    }
    while (last<=12){
        if(arr[last+1]==arr[last]){
            last++;
        }
        else
        {
            break;
        }  
    }
    cout << "the first occurence of 4 is at " <<first<<endl;
    cout << "the last occurence of 4 is at " <<last<<endl;

    //cout<<"total no. of occurences of 4 is "<<(last-first+1);
    
    return 0;
}
