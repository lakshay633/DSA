#include <iostream>
using namespace std;
int main()
{
    // dynamic 2d array
    int m,n;
    // m rows and n columns
    cin >>m>> n;
    cout <<endl;
    int ** arr = new int*[m];       
    // This creates an array of pointers which would point to there corresponding arrays

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    // creates n elemented array for m pointers 
    
    // taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout <<endl;
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr[i][j]<<"  ";
        }
        cout <<endl;
    }
    
    // releasing memory
    for (int i = 0; i < m; i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;  
}