#include<iostream>
using namespace std;
 
class first    //base or parent class
{
     public:    //Access Specifier
     int a,b;    
void getdata()   //member function getdata()
{
     cout<<"\nEnter Number :::\t";
     cin>>a>>b;
}
void putdata()     //member function putdata()
{
     cout<<"\nNumber Is :::\t"<<a<<"\t"<<b;
}
};
 
class second :public first   //class second inherits property of class first 
{
    public :    //Access Specifier
    int c;
    void add()
    {
       getdata();
       putdata();
       c=a+b;
       cout<<"\n\nAnswer :::\t"<<c;
    }
};
 
int main()
{
     second s1;    //s1 is object of class second  
     s1.add();  
     
}


