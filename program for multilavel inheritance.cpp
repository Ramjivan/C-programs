#include<iostream>
using namespace std;
class top{
public :int a;
void getdata(){
cout<<"\n\nEnter first Number :::\t";
cin>>a;
}
void putdata()
{
cout<<"\nFirst Number Is :::\t"<<a;
}
};
class middle :public top      // class middle is derived_1 
{
public:
int b;
void square()
{
getdata();
b=a*a;
cout<<"\n\nSquare Is :::"<<b;
}
};
class bottom :public middle    // class bottom is derived_2 
{
public:
int c;
void cube()
{
square();
c=b*a;
cout<<"\n\nCube :::\t"<<c;
}
};
int main()
{
bottom b1;
b1.cube();
}

