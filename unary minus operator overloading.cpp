#include<iostream>
using namespace std;
 class abc
{
    public:
    int p,q,r;
       abc()
    {
        p=0;
        q=0;
        r=0;
    }
 abc(int a,int b,int c)
    {
        p=a;
        q=b;
        r=c;
    }
  void display()
    {
        cout<<"\n\n\t"<<p<<"  "<<q<<"    "<<r;
    }
  // Overloaded minus (-) operator
    abc operator- ()
    {
        p= -p;
        q= -q;
        r= -r;
    }
};
int main()
{
  abc u1(10,-40,70);
  cout<<"\n\nNumbers are :::\n";
  u1.display();
   -u1;           // call unary minus operator function
  cout<<"\n\nNumbers are after applying overloaded minus (-) operator :::\n";
   u1.display();  // display u1
   
}

