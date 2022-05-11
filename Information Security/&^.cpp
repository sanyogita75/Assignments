
#include <iostream>

using namespace std;

int main()
{
    char s[]="Hello World";
    char s2[12];
    char s3[12];
    int len=sizeof(s);
    for(int i=0;i<len;i++){
        s2[i]=s[i]&127;
        cout<<s2[i];
    }cout<<endl;
    for(int i=0;i<len;i++){
        s3[i]=s[i]^127;
        cout<<s3[i];
    }
     //cout<<s2;
    return 0;
}
