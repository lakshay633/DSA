#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min;

    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}
