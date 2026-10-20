#include<iostream>
using namespace std;
void fakeswap(int x , int y)
{
    int temp ;
    temp = x;
    x=y;
    y=temp;
}
void swapvalues(int &x, int&y)
{
    int temp = x;
    x=y;
    y=temp;
}
int main()
{
    int x=10, y=20;
    fakeswap(x,y);
    cout<<"After fakeswap: \n"<<"x="<<x<<" y="<<y<<endl;
    swapvalues(x,y);
    cout<<"After swapvalues: \n"<<"x="<<x<<" y="<<y<<endl;
}
