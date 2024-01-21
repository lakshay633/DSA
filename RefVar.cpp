#include <iostream>
using namespace std;

int upd(int &i){
    i++;
}
int main()
{
    int i = 5;
    int & j = i;
    cout<<&i <<endl;
    cout<<&j <<endl;
    cout << ++i<<endl;
    cout << j<<endl;
    cout << ++j<<endl;
    cout << i<<endl;

    cout <<"before upd" <<i<<endl;
    upd(i);
    cout <<"after upd" <<i<<endl;
    return 0;
}