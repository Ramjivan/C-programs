#include<iostream>
using namespace std;
 
class A  //Base Class
{
    public:
    int a,b;
    void getnumber()
    {
    cout<<"\n\nEnter Number :::\t";
    cin>>a;
    }};
 class B : public A  //Derived Class 1
{
    public:
    void square()
    {
    getnumber();  //Call Base class property
    cout<<"\n\n\tSquare of the number :::\t"<<(a*a);
    cout<<"\n\n\t----------------------------------------------------";
    }
};
 class C :public A //Derived Class 2
{
    public:
    void cube()
    {
    getnumber(); //Call Base class property
    cout<<"\n\n\tCube of the number :::\t"<<(a*a*a);
    cout<<"\n\n\t----------------------------------------------------";
    }};
 
int main()
{ 
B b1;         //b1 is object of Derived class 1
b1.square();  //call member function of class B
C c1;         //c1 is object of Derived class 2
c1.cube();    //call member function of class C
}

