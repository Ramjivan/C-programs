#include<iostream>
using namespace std;
class login
{public:
int ps,cp,np;
int log()
{
	
	ps=1618;
	cout<<"\nEnter Password\n";
	cin>>cp;
	if(cp==ps)
	{cout<<"\nWelcome G.one\n";
	cp=0;
	choice();}
	else
	{
	cout<<"\nYou have entered WRONG Password.";}	
}
int choice()
{int chose;
	cout<<"press 1 for change password\n";
	cin>>chose;
	switch(chose)
	{
	case 1:{
		cout<<"\nEnter current Password\n";
		cin>>cp;
		if(cp==ps)
		{
		cout<<"\nEnter new Password\n";
		cin>>np;
		ps=0;
		ps=np;
		np=0;
		cout<<"\nPassword has been sucessfully changed!!\n";}
		else
		{cout<<"\nYou have entered WRONG Password.";
		}
		break;
	}
	default:{
		cout<<"\nSorry you have enterd WRONG choice!!\n";
		return 0;
	}
}
}
};

int main()
{
	login obj;
	obj.log();
}

