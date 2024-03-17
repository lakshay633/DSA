#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums,vector<int> output,int index,vector<vector<int>>& ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,output,index+1,ans);
    //include
    // int element=nums[i];
    output.push_back(nums[index]);
    solve(nums,output,index+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums,vector<vector<int>>& ans) {   
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    subsets(nums,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
           int temp =ans[i][j];
           cout<<temp<<" ";
        }
        cout <<endl;
    }
    
    return 0;
}