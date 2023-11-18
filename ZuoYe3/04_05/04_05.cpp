#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n; 
    cin >> n; 

    int term; 
    int review; 
    char Student; 
    char Western; 
    int Thesis; 
    long Bonu = 0; 
    long Bonus = 0; 

    int item; 
    string name; 
    string maxname; 
    int max = 0; 

    for (int i = 0; i < n; i++) 
    {
        cin >> name >> term >> review >> Student >> Western >> Thesis;

        if (term > 80 && Thesis > 0) 
        {
            Bonu += 8000;
            Bonus += 8000;
        }
        if (term > 85 && review > 80) 
        {
            Bonu += 4000;
            Bonus += 4000;
        }
        if (term > 90) 
        {
            Bonu += 2000;
            Bonus += 2000;
        }
        if (term > 85 && Western == 'Y') 
        {
            Bonu += 1000;
            Bonus += 1000;
        }
        if (review > 80 && Student == 'Y') 
        {
            Bonu += 850;
            Bonus += 850;
        }

        if (Bonu > max) 
        {
            max = Bonu;
            item = i;
            maxname = name;
        }
        
        Bonu = 0;
    }

    cout << maxname << endl;
    cout << max << endl;
    cout << Bonus;

    return 0;
}