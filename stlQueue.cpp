#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> s;
    s.push("a");
    s.push("b");
    s.push("c");
    cout<<"first element is "<<s.front()<<endl;
    s.pop();
    cout<<"first element is "<<s.front()<<endl;
    s.pop();
    cout<<"size of the stack is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    cout<<"first element is "<<s.front()<<endl;
    s.pop();
    cout<<"size of the stack is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    return 0;
}