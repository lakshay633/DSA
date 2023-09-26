// https://www.geeksforgeeks.org/return-maximum-occurring-character-in-the-input-string/

#include <iostream>
using namespace std;
char max(string s){
    int a[26]={0};
    int n = -1;
    //creating an arr of count of letters
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c>='a'&&c<='z') //lowercase letters
        {
            n=c-'a';
        }
        else                //uppercase letters
        {
            int n=c-'A';
        }
        a[n]++;
    }
    //finding max of arr
    int m= -1,ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i]>m)
        {
            m=a[i];
            ans=i;
        }
    }
    char res='a'+ans;
    return res;
}
int main()
{
    string s;
    cin >>s;
    cout<<max(s);
    return 0;
}