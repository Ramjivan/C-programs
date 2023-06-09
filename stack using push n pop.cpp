#include<iostream>
using namespace std;
#define max 10			//Maximum Size of Stack

int stack[max];
int top=-1,item;		//top=-1 means Stack is Empty.
				//First Element will be stored at Zero Location. (top=0)
int  main()
{
int choice;

int Push();
int Pop();
int Display();

for(;;)				//Infinite Loop.
{
cout<<"\n\n\n\n---------- STACK ---------- \n";
cout<<"\nMain Menu\n\n1. PUSH\n2. POP\n3. Display\n4. Exit\n\nEnter your choice : ";
cin>>choice;

switch(choice)
{
case 1:
Push();
break;

case 2:
Pop();
break;

case 3:
Display();
break;

default:
cout<<"\nWrong Input";
return 0;
}
}
}

int Display()			//Display's the Element of Stack.
{
   int i;
   if(top==-1)
   {
   cout<<"\nStack is Empty.\n";
   }
   else
   {
   for(i=top;i>=0;i--)
   {
   cout<<endl<<"Stack["<<i<<"]="<<stack[i];
   if(i==top)
   cout<<" <-- Top";
   }
   }
}


int Push()			//Insert a New Element in Stack.
{
   if(top==max-1)		
   {
   cout<<"\nOverflow\n";
   }
   else
   {
   cout<<"\nEnter the Element you want to Insert : ";
   cin>>item;
   top=top+1;
   stack[top]=item;
   cout<<endl<<item<<" is Inserted at Top.\n";
   Display();
   }
}


int Pop()			//Delete Element from Stack.
{
   if(top==-1)
   {
   cout<<"\nUnderflow\n";
   }
   else
   {
   item=stack[top];
   top=top-1;
   cout<<endl<<item<<" is Deleted from Top.\n";
   Display();
   }

}


