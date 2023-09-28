// Replace Spaces
// https://www.codingninjas.com/studio/problems/replace-spaces_1172172

#include <iostream>
using namespace std;
string replaceSpaces(string &str){
	string temp="";
	for(int i=0;i<str.length();i++){
          if (str[i]==' '){
			  temp.push_back('@');
			  temp.push_back('4');
			  temp.push_back('0');
          }
		  else{
			  temp.push_back(str[i]);
		  }
        }
		return temp;
}
int main()
{
    string str = "lakshay is a genius";
    string res = replaceSpaces(str);
    cout << res;
    return 0;
}

