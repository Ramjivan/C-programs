#include<iostream>
using namespace std;
class complex
{int a,b;
public:
	int getvalue()
	{
		cout<<"Ente Two Numbers";
		cin>>a>>b;
	}
	int display()
	{
		cout<<"a="<<a<<"    "<<"b="<<b;
	}
	operator++()
	{
		a=++a;
		b=++b;
	}
	operator--()
	{
		b=--b;
		a=--a;
	}
};

int main()
{
	complex obj;
	obj.getvalue();
	obj++;
	cout<<"After Incriment";
	obj.display();
	obj--;
	cout<<"After Decrement";
	obj.display;
}
	

