#include <iostream>
using namespace std;
static int count;
class Student
{
private:
    char Name;
    int Class, Code, Score;
public:
    int getCount();
    char getScore();
    void getAll();
    void set(char a, int b, int c, int d);
};
void Student::set(char a, int b, int c, int d)
{
    Name = a;
    Class = b;
    Code = c;
    Score = d;
    count = count+1;
}
char Student::getScore()
{
    if(Score<=59){return 'D';}
    if(Score<=79&&Score>59){return 'C';}
    if(Score<=89&&Score>79){return 'B';}
    if(Score<=100&&Score>89){return 'A';}
    return '0';
}
void Student::getAll()
{
    cout<<"姓名："<<Name<<" 班级："<<Class<<" 学号："<<Code<<" 分数:"<<Score<<getScore()<<endl;
}
int Student::getCount() 
{
    return count;
}
int main()
{
    system("chcp 65001");
    while (1)
    {
        char Name;
        int Class,Code,Score;
        cin>>Name>>Class>>Code>>Score;
        if(Name!='0'||Class!=0||Code!=0||Score!=0)
        {
            Student S1;
            S1.set(Name,Class,Code,Score);
            S1.getAll();
            cout<<"当前第"<<S1.getCount()<<"个"<<endl;
        }
        else
        {
            break;
        }
    }
}