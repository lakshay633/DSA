// from a given array find the length of smallest subsegment you need to remove to make all remaining elements unique. In other words,you can choose two integers l and r (1≤l≤r≤n) and delete integers al,al+1,…,ar from the array. Remaining elements should be pairwise distinct. you can remove at most one subsegment.

// Input Format

// The first line of the input contains a single integer n the number of elements in the given array.

// The next line contains n spaced integers a1,a2,…,an the elements of the array.

// Constraints

// (1≤n≤2000) (1≤ai≤10^9)

// Output Format

// Print a single integer — the minimum size of the subsegment you need to remove to make all elements of the array pairwise distinct. If no subsegment needs to be removed, print 0.

// Sample Input 0

// 3
// 1 2 3
// Sample Output 0

// 0
// Sample Input 1

// 4
// 1 1 2 2
// Sample Output 1

// 2

#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> mp;
    int cnt = 0, ans = 5 * (int)1e10;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] >= 2) cnt++;
    }

    if (cnt > 0) {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (mp[a[j]] >= 2) {
                    mp[a[j]]--;
                    cnt--;
                }
                if (cnt == 0) ans = min(ans, j - i + 1);
            }
            cnt = 0;
            mp.clear();
            for (int k = 0; k < n; k++) {
                mp[a[k]]++;
                if (mp[a[k]] >= 2) cnt++;
            }
        }
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}