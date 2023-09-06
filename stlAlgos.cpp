#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(11);
    cout<<"is 6 ther ? "<<binary_search(v.begin(),v.end(),6)<<endl;     //finding 6
    cout<<"lower boung while finding 6 is "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;  //returns iterater
    cout<<"upper boung while finding 6 is "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;  //returns iterater
    int a=3,b=5;
    cout <<"max of a,b is "<<max(a,b)<<endl;
    cout <<"min of a,b is "<<min(a,b)<<endl;
    swap(a,b);
    cout <<"after swap a,b is "<<a<<","<<b<<endl;
    string s ="abcde";
    reverse (s.begin(),s.end());
    cout << "reversed string is "<<s<<endl;
    rotate(v.begin(),v.begin()+2,v.end());  //{start-mid-end}=>{mid-end,start-mid}
    for(int i:v ){
        cout<<i<<" ";
    }
    cout<<endl;
    //intro(mixture of quick,insertion,heap sorts) sort on rotated array
    sort (v.begin(),v.end());
    for(int i:v ){
        cout<<i<<" ";
    }
    return 0;
}