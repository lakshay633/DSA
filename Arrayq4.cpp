//https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186
//Sum Of Two Arrays

#include <iostream>
#include <vector>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
    // third case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //we have the right answer but in reversed order becoz of pushback

    i=0;
    j=ans.size()-1;
    while(i<j){
        swap(ans[i++],ans[j--]);
    }
    return ans;
}
int main()
{
    vector<int> a ={1,2,3,4};
    vector<int> b ={9,8,7,6};
    vector<int> c =findArraySum(a,a.size(),b,b.size());
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i];
    }
    cout <<endl;
    return 0;
}