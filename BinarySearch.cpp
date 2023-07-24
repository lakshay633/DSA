#include <iostream>
using namespace std;
int bs(int arr[],int size,int key){
    int s = 0,e = size - 1;
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    while (s<=e){
        if(key == arr[mid]){
            return mid;
        }
        else if (key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return -1;
}

int main()
{
    int odd[]= {11,22,33,44,55,66,77};
    int even[]= {11,22,33,44,55,66,77,88};
    int res_e=bs(even,8,77);
    int res_o=bs(odd,7,77);
    cout<<"77 in odd is at "<<res_o<<endl;
    cout<<"77 in even is at "<<res_e<<endl;
    return 0;
}
