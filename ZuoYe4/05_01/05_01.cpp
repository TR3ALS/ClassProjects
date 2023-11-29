#include<iostream>
using namespace std;
#define pi 3.14

class Circle
{
    private:
        double r;
    public:
        double CArea();
        double CLen();
        double GetR();
        void setR(double r);
        Circle() { double r = 0; }
        Circle(double r) { this->r = r; }
        Circle(Circle&c) { this->r = c.GetR(); }
};
double Circle::GetR()
{
    return r;
}
void Circle::setR(double r)
{
    this->r=r;
    cout << endl;
}
double Circle::CArea()
{
    double A=pi*r*r;
    cout << "圆面积:" << A << endl;
    return A;
}
double Circle::CLen()
{
    double L = 2 * pi*r;
    cout << "圆周长:" << L << endl;
    return L;
}

int main()
{
    system("chcp 65001");
    double r=0;
    Circle c1;
    cin >> r;
    c1.setR(r);
	c1.CArea();
	c1.CLen();
    system("pause");
    return 0;
}