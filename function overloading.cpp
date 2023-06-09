#include<iostream>
using namespace std; 
class funoverload
{
    public:
 
    // Volume of Cube
 
    int volume(int a)
    {
        return a*a*a;
    }
    // Volume of Cone
 
    double volume(double r,double h)
    {
        return (0.33*3.14*r*r*h);
    }
 
    // Volume of Cylinder
 
    double volume(double r,int h)
    {
        return (3.14*r*r*h);
    }
 
    // Volume of Cuboid
 
    double volume(double l,double b,double h)
    {
        return (l*b*h);
    }
 };
 
int main()
{ 
    funoverload f1;
 
    cout<<"\nVolume of the Cube :::\t"<<f1.volume(10);
 
    cout<<"\n\nVolume of the Cone :::\t"<<f1.volume(2.0,3.0);
 
    cout<<"\n\nVolume of the Cylinder :::\t"<<f1.volume(2.0,3);
 
    cout<<"\n\nVolume of the Cuboid :::\t"<<f1.volume(5.0,6.0,7.0);
 
    
 
    return 0;
}

