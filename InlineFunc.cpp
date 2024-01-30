#include <iostream>
using namespace std;

//inline functions works for single line functions ... it directly replaces the code where it is called by saving function overhead time(loading in stack above main and then going back to main after completion) and also increases readibility and easy editing like normal function.
//compiler MAY also let it work for 2 to 3 lines but not at all for more than that

inline int maxi(int& a,int& b){
    return (a>b) ? a : b;
}
int main()
{
    int a = 3;
    int b = 4;
    int max = maxi(a,b);
    cout <<max;
    return 0;
}