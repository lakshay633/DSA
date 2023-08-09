// Allocate Books
// https://www.geeksforgeeks.org/allocate-minimum-number-pages/

#include <iostream>
using namespace std;

bool ifPossible(int arr[],int n,int m,int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if(pageSum + arr[i]<=mid){
            pageSum +=arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount>m||arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocatebooks(int n,int m,int arr[]){ // n= no.of books & m = no. of students
    int s=0,sum=0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if (ifPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,4};
    int m = 2;
    int n = 4;
    int res = allocatebooks(n,m,arr);
    cout << res;
    return 0;
}