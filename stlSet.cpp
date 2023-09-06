//it is implemented using bst
//it stores unique elements in sorted way and elements can only b added or deleted
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(1);
    s.insert(1);
    for (int i:s)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    s.erase(s.begin());           //deletes element at 0th index
    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);    //deletes element at 2nd index
    for (int i:s)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    cout<<"5 present? "<<s.count(5)<<endl;
    set<int>::iterator itr = s.find(5);     //returns index of "5" if present
    for(auto it = itr;it!=s.end();it++){    //printing all elements from 5 onwards
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}