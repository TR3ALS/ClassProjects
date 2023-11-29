#include <iostream>
using namespace std;
class point
{
private:
    double X, Y;
public:
    void set1(double X,double Y);
    double getX();
    double gety();
    void setX(double X);
    void sety(double Y);
};
void point::set1(double X,double Y)
{
    X=X;
    Y=Y;
}
double point::getX(){return X;}
double point::gety(){return Y;}
void point::setX(double X){X=X;}
void point::sety(double Y){Y=Y;}

class Rectangle :public point
{
private:
    double L;
    double W;
public:
    void set2(double X,double Y,double L,double W);
    double getS();
    double getC();
};
void Rectangle::set2(double x, double y, double l, double w) 
{
    set1(x,y);
    L=l;
    W=w;
}
double Rectangle::getC() 
{
    return 2*L+2*W;
}
double Rectangle::getS() 
{
    return L*W;
}
int main()
{
    system("chcp 65001");
    double L,W,X,Y;
    cin>>X>>Y>>L>>W;
    Rectangle R1;
    R1.set2(X,Y,L,W);
    cout<<"坐标：("<<X<<"."<<Y<<")"<<endl;
    cout<<"面积："<<R1.getS()<<endl;
    cout<<"周长："<<R1.getC()<<endl;
    system("pause");
    return 0;
}