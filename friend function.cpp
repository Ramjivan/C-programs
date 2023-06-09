#include<iostream>
using namespace std;
class frndfun
{
    double num;  //private
    public:
    friend void show(frndfun f1);
    void setnum();   // declaring function
};
 
//   :: is scope resolution
 
void frndfun :: setnum()  //member function define outside the class definition
{
    cout<<"\n\nEnter Number :\t";
    cin>>num;
}
 
void show(frndfun f1)
{
    cout<<"\n\nEnter number is :::\t"<<f1.num;
}
 
 
int main()
{
    frndfun obj1;   // obj1 is object
    obj1.setnum();
    cout<<"\n\nAccessing the private data";
    show(obj1);

}

