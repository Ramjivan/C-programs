#include<iostream>
using namespace std;
#define size 5				//Maximum Size of Queue
int Queue[size];
int rear=-1,front=-1,item;		
int main()
{
int choice;
void Insert();
void Delete();
void Display();
for(;;)					//Infinite Loop.
{
cout<<"\n\n\n\n---------- QUEUE ---------- \n";
cout<<"\nMain Menu\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n\nEnter your choice : ";
cin>>choice;
switch(choice)
{
case 1:
Insert();
break;
case 2:
Delete();
break;
case 3:
Display();break;
case 4:
return 0;					//Exit
default:
cout<<"\nWrong Input";
    }
  }
}
void Display()				//Display's the Element of Queue.
{  int i;
   if(front==-1)
   cout<<"\nQueue is Empty\n";
  else
   for(i=front;i<=rear;i++)
   cout<<endl<<"Queue["<<i<<"]="<<Queue[i];
}
void Insert()				//Insert a New Element in Queue.
{
   if(rear==size-1)
   cout<<"\nOverflow\n";
   else
   {
      if(rear==-1 && front==-1)
      rear=0,front=0;
     else
      rear++;
   cout<<"\nEnter the Element you want to Insert : ";
   cin>>item;
   Queue[rear]=item;
   cout<<endl<<item<<" is Inserted.\n";
   Display();
   }
}
void Delete()				//Delete Element from Queue.
{
   if(front==-1)
   cout<<"\nUnderflow\n";
   else
   {
   item=Queue[front];
   if(front==rear)
     front=-1,rear=-1;
  else
     front=front++;
   cout<<endl<<item<<" is Deleted.\n";
   Display();
   }
   
}

