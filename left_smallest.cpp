#include<bits/stdc++.h>
using namespace std;

vector<int> ls(vector<int>& a,int size){
    vector<int> b(size);
    if(size == 0) return b;  
    b[0] = -1;
    for (int i = 1; i < size; i++) {
        int x = -1;
        for (int j = i-1; j >= 0; j--) {
            if (a[i] > a[j]) {
                x = a[j];
                break;
            }
        }
        b[i] = x;
    } 
}

int main() {
    int tc = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        int size = 0;
        cin >> size;
        vector<int> a; 
        for (int j = 0; j < size; j++) {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }
        vector<int>b = ls(a, size);
        for (int j = 0; j < size; j++) {
            cout << b[j] << " ";
        }
        cout << endl;
    }    
    return 0;
}
