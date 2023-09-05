#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("a");
    s.push("b");
    s.push("c");
    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"size of the stack is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"size of the stack is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    return 0;
}