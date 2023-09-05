#include <iostream>
#include <list>         //doubly linked list
using namespace std;
int main()
{
    list<int> l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(4);
    l.push_back(5);
    for (int i:l)
    {
        cout<<i<<"  ";
    }
    cout <<endl;
    cout <<"1st element "<<l.front()<<endl;
    cout <<"last element "<<l.back()<<endl;
    cout <<"empty or not "<<l.empty()<<endl;
    l.pop_back();
    for (int i:l)
    {
        cout<<i<<"  ";
    }
    cout <<endl;
    l.pop_front();
    for (int i:l)
    {
        cout<<i<<"  ";
    }
    cout <<endl;
    cout <<"size before erase "<<l.size()<<endl;
    l.erase(l.begin());  //deleting the 1st element
    cout <<"size after erase "<<l.size()<<endl;

    return 0;
}