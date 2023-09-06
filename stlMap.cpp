// stores in sorted order of key(unless unordered)
// keys must b unique or else value will get updated
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string> m;
    m[2]="b";
    m[1]="a";
    m[3]="c";
    m[5]="e";
    m[4]="d";
    m[4]="z"; //value gets updated 
    m.insert({8,"g"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\t";
    }
    cout<<endl;
    cout<<"finding 4 "<<m.count(4)<<endl;
    m.erase(3);
    cout<<"after erasing 3 "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\t";
    }
    cout<<endl;
    auto it = m.find(4);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}