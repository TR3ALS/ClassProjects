#include <iostream>
using namespace std;
class Triangle
{
private:
    double S1;
    double S2;
    double S3;
public:
    const char *ttype;
    void set(double S1,double S2,double S3);
};
void Triangle::set(double S1,double S2,double S3)
{
    S1=S1;
    S2=S2;
    S3=S3;
    if(S1==S2&&S2==S3){ttype="等边三角形";}
    if((S1==S2&&S1!=S3)||(S1==S3&S1!=S2)||(S2==S3&&S2!=S1)){ttype="等腰三角形";}
    if(S1!=S2&&S1!=S3&&S2!=S3){ttype="不等边三角形";}
}
int main()
{
    system("chcp 65001");
    double a,b,c;
    cin>>a>>b>>c;
    Triangle t1;
    t1.set(a,b,c);
    cout<<t1.ttype<<endl;
    system("pause");
    return 0;
};