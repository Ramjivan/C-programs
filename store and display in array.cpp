#include<iostream>
using namespace std;
int main()
{
	int i,j,r,c,arr[50][50];
	cout<<"Entre number of Rows";
	cin>>r;
	cout<<"Entre number of Columns";
	cin>>c;
	cout<<"Entre elements of array";
	for(i=0;i<r;i++)
	{for(j=0;j<c;j++)
	{
		cin>>arr[i];
	}
	}
	cout<<"Elements entered by you are as";
	for(i=0;i<r;i++)
	{for(j=0;j<c;j++)
	{
		cout>>arr[i];
	}
	}
	

}
