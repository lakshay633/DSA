#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// length
    char c[]="lakshay is a good boy";
	int n = strlen(c);
    cout <<n<<endl;

    string s="lakshay";
    cout <<s.length()<<endl;

    // compare
    char s1[]="lakshay";
    char s2[]="lakshay";
    char s3[]="lakshya";
    cout <<strcmp(s1,s2)<<endl; //same = 0
    cout <<strcmp(s3,s2)<<endl; //different = 1
    
    string p="boy";
    cout <<s.compare(p)<<endl;

    //copy
    strcpy(s3,s2); // (destination,source)
    
    p=s;

	return 0;
}
