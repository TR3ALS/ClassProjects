#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a[50];
    int i=0;
    cin>>a;
    for(;a[i];i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;
        }
    }
    for(i=0;a[i];i++)
    {
        cout<<a[i];
    }
    return 0;
}