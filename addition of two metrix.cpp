#include<iostream>
using namespace std;
 int main()
{
    int a[10][10];
    int b[10][10];
    int x,y,i,j;
       cout<<"\nEnter the number of rows and columns :::\n\n";
    cin>>x>>y;
     cout<<"\n\nEnter elements for Matrix A :::\n\n";
      for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
       cout<<"\n";
    }
   cout<<"\n\nEnter elements for Matrix B :::\n\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>b[i][j];
        }
        cout<<"\n";
    }
 cout<<"\n\nMatrix A :\n\n";
  for(i=0;i<x;i++)
    {
    for(j=0;j<y;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n\n";
    }
    cout<<"\n\nMatrix B :\n\n";
     for(i=0;i<x;i++)
      {
        for(j=0;j<y;j++)
        {
            cout<<"\t"<<b[i][j];
        }
        cout<<"\n\n";
    }
  cout<<"\n\nAddition of Matrix A and Matrix B :\n\n";
  for(i=0;i<x;i++)
    {
     for(j=0;j<y;j++)
        {
            cout<<"\t"<<a[i][j]+b[i][j];
        }
        cout<<"\n\n";
  }
 }

