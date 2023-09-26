#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string s="lakshay is a good boy";
	stringstream obj(s);
	string temp;
	while (obj>>temp)
	{
		cout << temp << endl;
	}
	return 0;
}
