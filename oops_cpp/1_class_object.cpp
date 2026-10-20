#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    int rollno;
    public:
    string name;
    void getdata(int Roll)
    {
        rollno = Roll;
    }
    int displaydata()
    {
        return rollno;
    }

};
int main()
{
    student s1;
    s1.name="Harry";
    s1.getdata(20);
    cout<<"Name= "<<s1.name<<endl;
    cout<<"Roll no.="<<s1.displaydata()<<endl;
    cout<<sizeof(student);
}