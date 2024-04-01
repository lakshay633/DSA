// Given an array of positive integers, you can choose three distinct indices and assign the sum of two elements to the third element. Can you transform the array so that all elements are less than or equal to a given value d, using this operation any number of times?

// Input Format

// The first line contains a single integer t the number of test cases.

// The first line of each test case contains two integers n and d the number of elements in the array a and the value d .

// The second line contains n integers a1,a2,…,an the array a .

// Constraints

// (1≤t≤2000) (3≤n≤100) (1≤d≤100) (1≤ai≤100)

// Output Format

// For each test case, print YES, if it's possible to make all elements ai less or equal than d using the operation above. Otherwise, print NO.

// Sample Input 0

// 3
// 5 3
// 2 3 2 5 4
// 3 4
// 2 4 4
// 5 4
// 2 1 5 3 6
// Sample Output 0

// NO
// YES
// YES

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool ans(int n,int d,vector <int>& a){
    sort(a.begin(),a.end());
    if((a[0]+a[1])<=d)return true;
    if(a[1]>d)return false;
    if(a[n-1]<=d)return true;
    int i=0;
    while (i<n)
    {
        if (a[i]>d)a[i]==(a[0]+a[1]);
        i++;
    }
    if(a[n-1]>d)return false;
    return true;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,d;
        vector <int> a;
        cin>>n>>d;
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            a.push_back(e);
        }
        if(ans(n,d,a))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
