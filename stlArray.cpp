#include <iostream>
#include<array>
using namespace std;
int main()
{
    int ab []= {1,2,3,4,5};
    array<int,4> a={1,2,3,4};
    cout<<"3rd element "<<a.at(2)<<endl;
    // cout<<ab.at(2);       it will give error ... must be defined by using stl array
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    cout<<"size is of "<<a.size()<<endl;
    return 0;
}