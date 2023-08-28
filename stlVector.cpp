#include <iostream>
#include <vector>      // vector is dynamic array ... it doubles its size in case of overflooding
using namespace std;
int main()
{
    vector<int> a ;
    cout<<""<<a.capacity() <<endl;  //amount of storage possible
    cout<<""<<a.size() <<endl<<endl;      //no. of elements stored
    cout<<"inserting values and seeing changes in capacity and size"<<endl;
    a.push_back(1);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;      
    a.push_back(2);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    a.push_back(3);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    a.push_back(4);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    a.push_back(5);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    cout<<"deleting values and seeing changes in capacity and size"<<endl;
    a.pop_back();
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    return 0;
}