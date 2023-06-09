
    #include<iostream>
 using namespace std;
    int main()
    {
   
    int a[100],i,n,j,temp;
    cout<<"How many element: ";
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"The elements of array Before Sorting: "<<endl;
    //Coding by: Snehil Khanor
    //http://WapCPP.blogspot.com
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n-1-i;j++)
    {
    if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
    }
    }
    cout<<"Elements of array After Sorting: "<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    }
