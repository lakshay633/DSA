// You are a renowned chef preparing a special tasting menu for an upcoming culinary event. You have meticulously curated n dishes, each with its own complexity level denoted as dish i with a difficulty level of ai. As you plan the menu, you'll follow these steps:
// You may choose to exclude some (or none) of the dishes from the menu. You have the freedom to arrange the remaining dishes in any order you desire. A tasting menu is considered well-balanced if the contrast in complexity between any two consecutive dishes is at most k.
// Your task is to determine the minimum number of dishes you need to remove to ensure that the tasting menu is perfectly balanced.

// Input Format
// The first line contains a single integer t — the number of test cases.
// The first line of each test case contains two positive integers n and k — the number of problems, and the maximum allowed absolute difference between consecutive problems.
// The second line of each test case contains n space-separated integers ai — the difficulty of each problem.

// Constraints
// (1≤t≤1000) (1≤n≤200000) (1≤k≤10^9) (1≤ai≤10^9) Note that the sum of n over all test cases doesn't exceed 200000

// Output Format
// For each test case, output a single integer — the minimum number of problems you have to remove so that an arrangement of problems is balanced.

// Sample Input 0
// 7
// 5 1
// 1 2 4 5 6
// 1 2
// 10
// 8 3
// 17 3 1 20 12 5 17 12
// 4 2
// 2 4 6 8
// 5 3
// 2 3 19 10 8
// 3 4
// 1 10 5
// 8 1
// 8 3 1 4 5 10 7 3

// Sample Output 0
// 2
// 0
// 5
// 0
// 3
// 1
// 4

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ans(int n, int d, vector<int>& a) {
    if (a.size() == 1)
        return 0;
    sort(a.begin().a.end());
    int rem1 = 0;
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n && a[i + 1] - a[i] > d)
            rem1 += 2;
    }
    int rem2 = 1;
    for (int i = 1; i < n; i += 2) {
        if (i + 1 < n && a[i + 1] - a[i] > d)
            rem2 += 2;
    }

    return min(rem1, rem2);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, d;
        vector<int> a;
        cin >> n >> d;
        for (int j = 0; j < n; j++) {
            int e;
            cin >> e;
            a.push_back(e);
        }
        cout << ans(n, d, a) << endl;
    }
    return 0;
}