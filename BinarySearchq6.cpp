//Aggressive Cows Problem
//https://www.codingninjas.com/studio/problems/aggressive-cows_1082559

#include <iostream>
using namespace std;

bool isPossible(int stalls[],int k,int n,int mid){
    int cowcount=1;
    int lastpos = stalls[0];
    for (int i = 0; i < n; i++)
    {
        if (stalls[i]-lastpos>=mid)
        {
            cowcount++;
            if (cowcount==k)
            {
                return true;
            }
            lastpos=stalls[i];
        }    
    }
    return false;
}
void sort(int arr[],int size)
{

    int min;

    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
int main()
{
    int stalls[]={4,2,1,3,6};
    int n = (sizeof(stalls))/4;
    sort(stalls,n);
    int k = 2;
    int s =0,maxi=-1;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi,ans=-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if(isPossible(stalls,k,n,mid)){
            ans= mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    cout <<ans;
    return 0;
}