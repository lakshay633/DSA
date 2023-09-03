#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
    d.push_back(4);
    d.push_back(5);
    for (int i:d)
    {
        cout<<i<<"  ";
    }
    cout <<endl;
    cout <<"1st element "<<d.front()<<endl;
    cout <<"last element "<<d.back()<<endl;
    cout <<"empty or not "<<d.empty()<<endl;
    d.pop_back();
    for (int i:d)
    {
        cout<<i<<"  ";
    }
    cout <<endl;
    d.pop_front();
    for (int i:d)
    {
        cout<<i<<"  ";
    }
    cout <<endl;
    cout <<"size before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);  //deleting the 1st element
    cout <<"size after erase "<<d.size()<<endl;

    return 0;
}