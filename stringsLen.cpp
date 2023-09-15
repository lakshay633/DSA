#include <iostream>
#include <vector>
using namespace std;

int len(char a[]){
    int c=0;
    for (int i = 0; a[i] != '\0' ; i++)
    {
        c ++;
    }
    return c;
}
int main()
{
    char c[20];
    cin>>c;
    cout <<"the length of c is "<<len(c)<<endl;
    
    vector<char> a={'a','b','c','d'};
    cout<<a.size();
    return 0;
}