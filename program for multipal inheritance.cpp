#include<iostream>
using namespace std;
class A              // Base class 1
{
public:
int a;
void First()    
{
cout<<"\n\nFirst Number :::\t";
cin>>a;
}
};
class B        //Base class 2
{
public:
int b;
void second()
{
cout<<"\n\nSecond Number :::\t";
cin>>b;
}
};
//Multiple Inheritance Level
class C :public A,public B     // Class C is derived class
{
public:
int c;
void result()
{
First();
second();
c=a+b;
cout<<"\n\nResult :::\t"<<c;
}
};
 
int main()
{
C c1;
c1.result();

}

