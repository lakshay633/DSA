// https://www.interviewbit.com/problems/woodcutting-made-easy/
int Solution::solve(vector<int> &a, int b) {
    sort(a.begin(), a.end());
    int n = a.size(), s = 0, e = a[n-1], ans = 0;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long woodCut = 0; 
        
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] <= mid) break;
            woodCut += (a[i] - mid);
        }
        
        if (woodCut >= b) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return ans;
}
