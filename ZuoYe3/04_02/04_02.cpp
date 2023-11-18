#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int fibo[20];
    fibo[1]=1;
    fibo[2]=1;
    int i=3;
    while (i<21)
    {
        fibo[i]=fibo[i-2]+fibo[i-1];
        i=i+1;
    }
    i=1;
    while (i<n+1)
    {
        int x;
        cin>>x;
        cout<<fibo[x]<<endl;
        i=i+1;
    }
    return 0;
}