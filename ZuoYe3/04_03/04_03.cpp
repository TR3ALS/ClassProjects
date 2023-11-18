#include <iostream>
using namespace std;
int main() 
{
    double a,b;
    cin>>a>>b;
    double n;
    n=1;
    int x=0;
    while(n*a<=b)
    {
        x=x+1;
        n=n*a;
    }
    cout<<x<<endl;
    return 0;
}