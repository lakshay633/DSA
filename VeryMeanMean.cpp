// Isha has an array containing n integers. Let's assume k as the arithmetic mean of these elements (It is not necessary that k is an integer).

// k=sum of elements/n

// Isha wants to delete exactly two elements from the array and do not want k(mean) to change.

// Your task is to calculate the number of pairs of positions [i,j] (i

// Input Format

// The first line contains one integer n (3≤n≤2*10^5) — the number of elements in the array.

// The second line contains a sequence of integers a1,a2,…,an (0≤ai≤10^9), where ai is the i-th element of the array.

// The sum of n over all testcases doesn't exceed 2*10^5.

// Constraints

// 3≤n≤2*10^5 0≤ai≤10^9

// Output Format

// Print one integer — the number of pairs of positions [i,j] (i

// Sample Input 0

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate the arithmetic mean (k)
    double k = static_cast<double>(sum) / n;

    // Count of valid pairs
    long long validPairs = 0;

    // Iterate through each pair of positions [i, j] (0-based index)
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Calculate the new sum after removing elements at positions i and j
            long long newSum = sum - arr[i] - arr[j];
            // If the new sum is equal to k * (n - 2), increment the count of valid pairs
            if (newSum == k * (n - 2)) {
                validPairs++;
            }
        }
    }

    cout << validPairs << endl;

    return 0;
}
