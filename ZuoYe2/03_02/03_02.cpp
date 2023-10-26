#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    int a;
    int b=0;
    cout<<"输入"<<endl;
    cin>>a;
    do
    {
        cout<<a%10;
        a=a/10;
        b=b+1;
    }
    while(a!=0);
    cout<<endl;
    cout<<b<<endl;
    return 0;
}