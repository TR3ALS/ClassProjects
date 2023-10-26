#include <iostream>
using namespace std;
bool is_prime(int a)
{
    if (a < 2) return false;
    for (int i = 2; i <= a / i; i ++ )//
        if (a % i == 0)
            return false;
    return true;
}
int main()
{
    int i=200;
    while(i<=300)
    {
        if(is_prime(i)==true)
        {
            cout<<i<<endl;
        }
        i=i+1;
    }
}