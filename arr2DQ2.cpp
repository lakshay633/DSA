//maximum row and column wise sum

#include <iostream>
using namespace std;

void rowSum(int arr[][4],int r, int c){
    cout<<"Row wise sums are: ";
    int maxSum = 0;
    int maxSumRow = 0;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << sum <<"  ";
        if (sum>maxSum )
        {
            maxSum=sum;
            maxSumRow = i;
        }
    }
    cout << endl;
    cout << "Maximum sum of a row is: "<< maxSum<<endl;
    cout << "Row with maximum sum is: "<< maxSumRow<<endl;
    cout << endl;
}
void colSum(int arr[][4],int r, int c){
    cout<<"Column wise sums are: ";
    int maxSum = 0;
    int maxSumCol = 0;
    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < r; j++)
        {
            sum += arr[j][i];
        }
        cout << sum <<"  ";
        if (sum>maxSum )
        {
            maxSum=sum;
            maxSumCol = i;
        }
        
    }
    cout << endl;
    cout << "Maximum sum of a column is: "<< maxSum<<endl;
    cout << "Column with maximum sum is: "<< maxSumCol<<endl;
    cout << endl;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    rowSum(arr,3,4);
    colSum(arr,3,4);
    return 0;
}