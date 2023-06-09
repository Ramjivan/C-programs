    #include<iostream>
   using namespace std;
    int main()
    {
    
    int a[10][10],m,n,i,j;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of coloumns: ";
    cin>>n;
    cout<<endl<<"Enter elements of matrix: "<<endl;
    //Coding by: Snehil Khanor
    //http://WapCPP.blogspot.com
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    cout<<"Enter element a"<<i+1<<j+1<<": ";
    cin>>a[i][j];
    }
    }
    cout<<endl<<"Displaying Matrix: "<<endl<<endl;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl<<endl;
    }
 
    }

