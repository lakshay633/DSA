#include <iostream>
#include <vector>      // vector is dynamic array ... it doubles its size in case of overflooding
using namespace std;
int main()
{
    vector<int> a ;
    cout<<""<<a.capacity() <<endl;  //amount of storage possible
    cout<<""<<a.size() <<endl<<endl;      //no. of elements stored
    cout<<"inserting values and seeing changes in capacity and size"<<endl;
    a.push_back(10);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;      
    a.push_back(20);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    a.push_back(30);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    a.push_back(40);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    a.push_back(50);
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    cout<<"deleting values and seeing changes in capacity and size"<<endl;
    a.pop_back();
    cout<<a.capacity() <<endl;  
    cout<<a.size() <<endl<<endl;  
    vector <int> b(5,1);   //b={1,1,1,1,1}
    ector <int> c(b);   //creating a copy of b named c
    return 0;
}
