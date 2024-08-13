// Next grater Element

// brute force 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr1[] ={4,5,8,63,2,4,6};
//     int arr2[] ={-1,-1,-1,-1,-1,-1,-1};
//     for (int i = 0; i < (sizeof(arr1)/4 - 1); i++)
//     {
//         for (int j = i+1; j < sizeof(arr1)/4; j++){
//             if(arr1[j]>arr1[i]){
//                 arr2[i]=arr1[j];
//                 break;
//             }
//         }
//         cout << arr1[i]<<" -> "<<arr2[i]<<endl;
//     }
//     cout << arr1[sizeof(arr1)/4 - 1]<<" -> "<<arr2[sizeof(arr2)/4 - 1]<<endl;
//     return 0;
// }

// using stack
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr={1,5,-1,7};
    int n = arr.size();
    stack<int> s;
    vector<int> res(n,-1);
    for(int i = n-1 ; i>=0;i--){
        while(!s.empty() && arr[i]>arr[s.top()]){
            res[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    for(int i = 0 ; i < res.size() ; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}