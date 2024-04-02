//print in wave pattern
// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int r, int c)
{
    vector<int> res;
    for (int i = 0; i < c; i++)
    {
        // top to bottom in even rows
        if (i % 2 == 0)
        {
            for (int j = 0; j < r; j++)
            {
                res.push_back(arr[j][i]);
            }
        }
        // bottom to top in odd rows
        else
        {
            for (int j = r - 1; j >= 0; j--)
            {
                res.push_back(arr[j][i]);
            }
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int r = 3, c = 4;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    vector<int> res = wavePrint(arr, r, c);
    for (int i = 0; i < r * c; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
