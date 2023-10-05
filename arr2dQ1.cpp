// linear search in 2d arr

#include <iostream>
using namespace std;
void linearSearch(int arr[][4],int r,int c, int x){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j]==x)
            {
                cout <<"the index of the element is: "<< i<<", "<<j;
                break;
            }
        }
    }
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x;
    cout<<"enter the element u wanna find : "<<endl;
    cin>>x;
    linearSearch(arr,3,4,x);
    return 0;
}