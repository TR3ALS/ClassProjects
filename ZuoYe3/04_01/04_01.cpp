#include <iostream>
using namespace std;

void moveOne(int diskCount, string whereFrom, string whereTo) 
{
	cout << diskCount << " : " << whereFrom << " -> " << whereTo << endl;
}

void move(int diskCount, string whereFrom, string whereOther, string whereTo)
{
	if(diskCount == 1)
		moveOne(1, whereFrom, whereTo);
	else
	{	 
		move(diskCount-1, whereFrom, whereTo, whereOther);
		moveOne(diskCount, whereFrom, whereTo);		
		move(diskCount-1, whereOther, whereFrom, whereTo); 
	}
} 
int main()
{
    int n;
    cin>>n;
    string a, b, c;
    cin>>a>>b>>c;
	move(n, a, b, c);	 
	return 0;
}