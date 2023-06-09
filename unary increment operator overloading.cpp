#include<iostream>
using namespace std;
 class UnaryOp
{
    public: int x,y,z;
     UnaryOp()
    {
        x=0;
        y=0;
        z=0;
    }
  UnaryOp(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
  void display()
    {
        cout<<"\n\n\t"<<x<<"  "<<y<<" "<<z;
    }
   // overloaded increment (++) operator
    UnaryOp operator++()
    {
        x= ++x;
        y= ++y;
        z= ++z;
    }
};
 int main()
{
 UnaryOp u1(10,11,12);
 
 cout<<"\n\nNumbers are :::\n";

   u1.display();

     ++u1;         // call pre increment operator function

   cout<<"\n\nNumbers are after applying overloaded pre increment (++) operator :::\n";

  u1.display(); // display u1
 
    ++u1;         // call post increment operator function
 
    cout<<"\n\nNumbers are after applying overloaded post increment (++) operator :::\n";
   u1.display(); // display u1
  

}

