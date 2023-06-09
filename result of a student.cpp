#include<iostream>
using namespace std;
class x
{public:
float pers;
	int percent(int minm,int maxm)
	{
		pers=minm*100/maxm;
		cout<<"\n You Got "<<pers<<" Persents...\n";
	}
	int div()
	{
		if(pers>=90)
		cout<<"\n!!Congretulations!! you are in Merit with A++ Grade\n";
		else if(pers>=75)
		cout<<"\n!!Congretulations!! you done nice and got first division\n";
		else if(pers>=60)
		cout<<"\n!!Congretulations!! you got first division\n";
		else if(pers>=50)
		cout<<"\n!!Congretulations!! you got second division\n";
		else if(pers>=33)
		cout<<"\n!!Congretulations!! you have been passes with THIRD division\n";
		else
		cout<<"\n!!Sorry!! you are failed. \n";
	}
};
int main()
{int minm,maxm;
cout<<"\nEnter Marks you got:\n";
cin>>minm;
cout<<"\nOut of:\n";
cin>>maxm;
x xxx;
xxx.percent(minm,maxm);
xxx.div();
}
	
