#include <iostream>
using namespace std;

#define pi 3.14   // this is how a macro is declared
// this is an object macro
# define perimeter(r) (pi*r*2)
// this is a chain macro(use of r) as well as function like macro
#define num 1, \
            2, \
            3      // this is a multi line macro

int main()
{
    int r;
    cin>> r;
    int area_circ = pi * r *r ;     // here the pi will be converted to its value before compilation ... so it didnt use storage as well as didnt need any time to access value that would be needed if it was a variable instead
    // also the value cant be changed in code by mistake like pi++
    cout << area_circ<<endl;

    cout <<perimeter(r)<<endl;

    int arr[]={num};
    
    return 0;
}