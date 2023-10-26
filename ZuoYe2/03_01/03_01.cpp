#include <iostream>
using namespace std;
int main() 
{
    system("chcp 65001");
    int a , b;
    cout<<"输入a"<<endl;
    cin>>a;
    cout<<"输入b"<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<a<<">"<<b;
    }
    if(a<b)
    {
        cout<<a<<"<"<<b;
    }
    if(a==b)
    {
        cout<<a<<"="<<b;
    }
    return 0;
}