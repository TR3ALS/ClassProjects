#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    int a;
    cout << "rows: ";
    cin >> a;
    for (int b = 1, c = 0; b <= a; ++b, c = 0)
    {
        for (int j = 1; j <= a - b; ++j)
        {
            cout << " ";
        }
        while (c != 2 * b - 1)
        {
            cout << "*";
            ++c;
        }
        cout << endl;
    }
    return 0;
}