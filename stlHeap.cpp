

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //max heap
    priority_queue<int> mx;
    mx.push(10);
    mx.push(20);
    mx.push(30);
    mx.push(40);
    mx.push(50);
    int n=mx.size();
    for (int i = 0; i < n; i++)
    {
        cout <<mx.top()<<" ";
        mx.pop();
    }
    cout<<endl;
    cout<<"empty or not "<<mx.empty()<<endl; //already loop me sab pop ho chuke hai 

    //min heap
    priority_queue<int,vector<int>,greater<int>> mn;
    mn.push(500);
    mn.push(400);
    mn.push(300);
    mn.push(200);
    mn.push(100);
    n=mn.size();
    for (int i = 0; i < n; i++)
    {
        cout <<mn.top()<<" ";
        mn.pop();
    }
    cout<<endl;
    cout<<"empty or not "<<mn.empty()<<endl;
    return 0;
}