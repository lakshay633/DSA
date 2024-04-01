// Calin possesses n buckets, with the i-th bucket containing ai wooden squares, each with a side length of 1 unit.

// Is it feasible for Calin to construct a square using all the provided squares?

// Input Format

// The first line contains a single integer t the number of test cases.

// The first line of each test case contains a single integer n the number of buckets.

// The second line of each test case contains n integers a1,…,an the number of squares in each bucket.

// The sum of n over all test cases does not exceed 200000 .

// Constraints

// (1≤t≤10000) (1≤n≤200000) (1≤ai≤10^9)

// Output Format

// For each test case, output "YES" if Calin can build a square using all of the given 1×1 squares, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

// Sample Input 0

// 5
// 1
// 9
// 2
// 14 2
// 7
// 1 2 3 4 5 6 7
// 6
// 1 3 5 7 9 11
// 4
// 2 2 2 2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool ans(int n,vector <int>& a){
    int totalSquares = 0;
    for (int i = 0; i < n; ++i) {
        totalSquares += a[i];
    }
    int sideLength = sqrt(totalSquares);
    return sideLength * sideLength == totalSquares;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        vector <int> a;
        cin>>n;
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            a.push_back(e);
        }
        if(ans(n,a))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}