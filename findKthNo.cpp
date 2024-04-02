// Given two positive integers n and k, output the k-th positive integer that isn't a multiple of n.

// For instance, if n = 3 and k = 7, the numbers not divisible by 3 are: 1, 2, 4, 5, 7, 8, 10, 11, 13... The 7th number in this sequence is 10.

// Input Format

// The first line contains an integer t the number of test cases in the input. Next, t test cases are given, one per line.

// Each test case is two positive integers n and k

// Constraints

// (1≤t≤1000) (2≤n≤10^9) (1≤k≤10^9)

// Output Format

// For each test case print the k -th positive integer that is not divisible by n.

// Sample Input 0

// 6
// 3 7
// 4 12
// 2 1000000000
// 7 97
// 1000000000 1000000000
// 2 1
// Sample Output 0

// 10
// 15
// 1999999999
// 113
// 1000000001
// 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int q = 0;q<t;q++){
        int n,k;
        cin>>n>>k;
        int c=0;
        int i=1;
        for(;c<k;i++){
            if(i%n != 0)c++;
        }
        cout <<i-1<<endl;
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     for(int q = 0; q < t; q++) {
//         int n, k;
//         cin >> n >> k;
//         cout << (k + (k - 1) / (n - 1)) << endl;
//     }
//     return 0;
// }