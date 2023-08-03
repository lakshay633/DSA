// find square root of a number with decimal places

#include<iostream>
using namespace std;

int sqrt(int n){
    int s = 0,e = n;
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    int ans = -1;
    while (s<=e){
        long long int sq = mid*mid;
        if(sq == n){
            return mid;
        }
        else if (sq<n){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
double decimal(int n,int digits, int intpart){
    double x = 1;
    double ans = intpart;
    for (int i = 0; i < digits; i++)
    {
        x=x/10;
        for (double j = ans; j*j < n; j=j+x)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout <<decimal(n,3,sqrt(n));
    return 0;
}