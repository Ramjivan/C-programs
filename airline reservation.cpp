#include<fstream.h>
using namespace std;
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
void res_menu();
void help();
void colyb()	{textcolor(YELLOW);textbackground(BLUE);}
void coldes(int a,int b)	{textcolor(a);textbackground(b);}
void s(int i,int j)
	{
	for(int a=i;a>0;a-=j)sound (a);
	}
void saund(int j)
	{
	j=0;
	for(int i=20;i<20000;i+=1000)
	{sound(i);delay(j);nosound();}
	}
class address{      protected :
		    char hno[10],city[30],post[30],colony[30],pin[10];
		    public :
	    void address_inp()
		    {cout<<"House No.       :            ";gets(hno);
		    cout<<"Colony          :            ";gets(colony);
		    cout<<"Post            :            ";gets(post);
		    cout<<"City            :            ";gets(city);
		    cout<<"Pin Code No.    :            ";gets(pin);
		    }
	    void address_out()
		 {
		   cout<< hno<<" , "<<colony<<" , "<<post<<" ,"<<city<<" - "<<pin;
		 }
	    };

class p_det
{
		protected :
		address add;
		float age;
		char name[40];
		char sex;
		public:

		void p_det_inp()
		{   colyb();
		cout<<"Enter Name      :            ";gets(name);
		    cout<<"Enter address         ";
		    add.address_inp();
		    cout<<"Enter age (Years.Months)  :       ";cin>>age;
		    cout<<"Enter sex group (M / F)   :       ";cin>>sex;

		}
		void p_det_out()
		{   colyb();
		    cout<<"PERSONAL DETAILS";
		    cout<<"Name                :            ";puts(name);
		    cout<<"Adress              :            ";
		    add.address_out();
		    cout<<"Age (Years.Months)  :         ";cout<<age;
		    cout<<"Sex group (M/F)     :         ";cout<<sex;
		    delay(500);
		    }

		void assign_name(p_det p,char str[]);
		};
		void p_det :: assign_name(p_det p,char str[])
		{
		strcpy(str,p.name);
		}
class dat{

		int dd,mm,yy;
				public :
		   void dat_inp()
			  {
				h:
				cout<<"	      date  :dd  :  ";cin>>dd;
				cout<<"		mm  :  ";cin>>mm;
				if((dd>31) || (mm>12))
				 {
				 cout<<"the date is invalid";
				 goto h;
				  }

				 cout<<"		yy  :  ";cin>>yy;


			  }
		    void dat_out()
			 {
			    if( (dd>0 && dd<31) && (mm>0 && mm <13) )
				{
				cout<<"DATE                 :            "<<dd<<" # "<<mm<<" # "<<yy;

				delay(500);
				}
			 }
	  };
class res :public dat
	  {
		char fcode[5];char to[15],from[15],via[15];
		float fare;
		public :
		p_det p;
	  void dest_out()
	  {cout<<"	from  :   ";puts(from);cout<<"via  :";puts(via);cout<<"to  :  ";puts(to);}
	  void res_inp()
		{ textcolor(RED); clrscr();
		res_menu();
		cout<<"RESERVATION FORM";
		cout<<"           ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		cout<<"Enter flight code : ";gets(fcode);
		if( strcmp(fcode,"0871")==0 )
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"DELHI");strcpy(via,"ÄÄ");
		   fare=100;
		   }
		else if(strcmp(fcode,"0037")==0)
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"CHENNAI");strcpy(via,"DELHI");
		   fare=700;
		   }
		else if(strcmp(fcode,"1070")==0)
		   {
		   strcpy(from,"DELHI");strcpy(to,"COCHIN");strcpy(via,"ÄÄ");
		   fare=730;
		   }
		else if(strcmp(fcode,"1007")==0)
		   {
		   strcpy(from,"DELHI");strcpy(to,"BANGALORE");strcpy(via,"ÄÄ");
		   fare=800;
		   }
		else if(strcmp(fcode,"1017")==0)
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"BANGALORE");strcpy(via,"DELHI");
		   fare=850;
		   }
		else if(strcmp(fcode,"7001")==0 )
		   {
		   strcpy(from,"ALLAHBAD");strcpy(to,"DELHI");strcpy(via,"ÄÄ");
		   fare=80;
		   }
		else
		{ coldes(1+128,0);clrscr();
		cout<<"  ERROR";saund(30);delay(1000);
		strcpy(from,"ERROR");strcpy(to,"ERROR");strcpy(via,"ERROR");exit(0);
		}
		p.p_det_inp();
		dat_inp();
		getch();
		clrscr();
		}
	   void res_out()
		{
		cout<<" RESERVATION ENTRIES";
		cout<<"          ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		cout<<"	Flight Code :  ";puts(fcode);
		p.p_det_out();
		dest_out();
		dat_out();
		}
		friend void assign_code(res p,char str[]);
	   };
		void assign_code(res p,char str[])
		{
		strcpy(str,p.fcode);
		}


void menu()
{
coldes(13,9);clrscr();
clrscr();
cout<<"



                                    MENU";
cout<<"
ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ
ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
cout<<"
                                 1 . Reservation";
cout<<"
                                 2 . Querries";
cout<<"
                                 3 . Cancellation";
cout<<"
                                 4 . Help";
cout<<"
                                 5 . Exit";
cout<<"
ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ
ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ";
delay(1200);
cout<<"
";
textcolor(BLINK+YELLOW);
cprintf("                                          Press any key to continue ...");
getch();
textcolor(YELLOW);
}
void res_menu()
{
textcolor(YELLOW);textbackground(8);
cout<<"

";saund(15);
cout<<"		        ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»
";
cout<<"		        ³      SAHARA  AIRLINES       ³
";
cout<<"		        ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ1/4
";
cout<<"                      RESERVATION / ROUTE / FARE MENU
";saund(15);
cout<<"	                      ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ 

";saund(15);
cout<<"ÛÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ
ÜÜÜÜÜÜÜÜÜÜÜÜ ";s(10000,500);
cout<<" ³ SN ³   FROM   ³   TO     ³    VIA   ³F.CODE³   TIMING    ³  
DAY
³ FARE ³ ";s(10000,500);
cout<<" ³    ³          ³          ³          ³      ³ (ARR)³(DEP) ³
³  ($) ³ ";s(10000,500);
cout<<" ³  1 ³ LUCKNOW  ³ DELHI    ³ ßßßßß    ³ 0871 ³ 1530 ³ 1615 ³
MONDAY   ³ 100  ³ ";s(10000,500);
cout<<" ³  2 ³ LUCKNOW  ³ CHENNAI  ³ DELHI    ³ 0037 ³ 1200 ³ 1230 ³
THURSDAY ³ 700  ³ ";s(10000,500);
cout<<" ³  3 ³ DELHI    ³ COCHIN   ³ ßßßßß    ³ 1070 ³ 1740 ³ 1830 ³
FRIDAY   ³ 730  ³ ";s(10000,500);
cout<<" ³  4 ³ DELHI    ³ BANGALORE³ ßßßßß    ³ 1007 ³ 2040 ³ 2100 ³
SUNDAY   ³ 800  ³ ";s(10000,500);
cout<<" ³  5 ³ LUCKNOW  ³ BANGALORE³ DELHI    ³ 1017 ³ 1615 ³ 1700 ³
MONDAY   ³ 850  ³ ";s(10000,500);
cout<<" ³  6 ³ ALLAHBAD ³ DELHI    ³ ÄÄÄÄÄ    ³ 7001 ³ 0845 ³ 0910 ³
SUNDAY   ³  80  ³"; s(10000,500);
cout<<"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
ÛÛÛÛÛÛÛÛÛÛÛÛÛ ";s(10000,500);
delay(1000);
saund(50);
textcolor(BLINK+YELLOW);
cprintf("                                     Press any to continue 
...");
getch();

}

void main()
{
textcolor(12);
textbackground(8);
int mch;
res r;
int flag=0,rec=0;
char ch;

do {  clrscr();
	saund(50);
//if(oo>0)restart();oo++;
char name[36],code[5],name1[36],code1[5];
char name2[36],code2[5];
int flag=0;
fstream fin,fin1;
textcolor(YELLOW);
	menu();
	saund(30);
	gotoxy(4,15);

	puts("     Enter your choice  :                                       
");
	gotoxy(30,15);
	cin>>mch;
	switch(mch)
		 {

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//			 C A S E  1  :  W R I T I N G
//###################################3####################################
#####
    case 1:       r.res_inp();
		  fin.open("oldmas.dat",ios::binary |ios::app);
		  fin.write( (char *) &r,sizeof(r));
		  fin.close();
		  fin.open("oldmas.dat",ios::binary |ios::in);
		  fin1.open("newmas.dat",ios::binary |ios::out);
		  fin.read( (char*)&r,sizeof(res) );
		  while(!fin.eof() )
			{

			fin1.write( (char*)&r,sizeof(res) );
			fin.read( (char*)&r,sizeof(res) );
			}
		  fin.close();
		  fin1.close();
     break;

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//                       C A S E : 2  " S E A R C H I N G"
//########################################################################
#####
  case 2:
	      fin.open("newmas.dat",ios::in|ios::binary);
	       cout<<"




ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
Ä";
	       cout<<"
	Enter the name  :  ";gets(name);
	       cout<<"
	Enter the flight code  :  ";gets(code);
	   while( !fin.eof() )
	     {
	       assign_code(r,code1);
	       r.p.assign_name(r.p,name1);
	       if(strcmpi(name1,name)==0  &&  strcmp(code1,code)==0)
		 {
		 clrscr();

cout<<"



aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 cout<<"
a                          Welcome to `Sahara Querries' ";

cout<<"
aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 r.res_out();
		 rec=1;

cout<<"

aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";

cout<<"aÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 cout<<"                    Press  any  key  to  continue";  getch();
		 }
		 fin.read((char *)&r , sizeof(res));
	     }

	    fin.close();							clrscr();
		 if(rec==0)
		 {
		 coldes(14+128,0);
		 clrscr();
		 cout<<"









		       Record not found  in  
Reservation
Master";
		 getch();
		 }

		break;
//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//			C A S E : 3  " C A N C L A T I O N "
//########################################################################
#########
case 3:
	cout<<"
enter the name ";
	gets(name);
	cout<<"
enter the code ";
	gets(code);
	cout<<"
	Checking for record";
	fin.open("oldmas.dat",ios::binary | ios::in);
	fin1.open("newmas.dat",ios::binary | ios::out);
	if(fin==NULL && fin1==NULL)
	  {
	  cout<<" No records found in Reservation Master";getch();
	  goto label;
	  }
	else
	{      fin.read( (char*)&r,sizeof(res) );
	   while(!fin.eof() )
	     {

	       assign_code(r,code1);
	       r.p.assign_name(r.p,name1);// cout<<"
name 1 & code1  :
";puts(name1);puts(code1);getch();
	       if(strcmpi(name1,name)==0  &&  strcmp(code1,code)==0)
		 {
		 cout<<"
 record found ";
		 cout<<"
	Deleting.a.a.a.a.";
		 }
	       else
		 {
		 fin1.write( (char*)&r ,sizeof(res));
		 }
		  fin.read( (char*)&r,sizeof(res) );
	     }
	}
	fin.close();fin1.close();
	cout<<"

		Record marked for deletion";
	getch();
		  unlink("oldmas.dat");
		  fin.open("oldmas.dat",ios::app|ios::binary );
		  fin1.open("newmas.dat",ios::binary |ios::in);
		  if(fin1==NULL)exit(0);
		  else
		    {
		     fin1.read( (char*)&r,sizeof(res) );
		     while(!fin1.eof() )
			{
			fin.write( (char*)&r,sizeof(res) );
			fin1.read( (char*)&r,sizeof(res) );
			}
		    }
		  fin.close();
		  fin1.close();


 label  :
	break;

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//			C A S E  4 : H E L P
//########################################################################
#####
	 case 4:help();break;

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//                      C A S E  5 : E X I T
//########################################################################
######
		 case 5:
		       //	for(int a=1;a<5;a++)
			{
			textcolor(YELLOW+BLINK);clrscr();
			puts("





                            Exiting . . .


				please wait");
			saund(70);
		       //	delay(10);nosound();saund(20);nosound();delay(150);

			}
			exit(1);
			break;
		 default :
		 cout<<"Out of choice  !!!
Try Again  (y/n)  :  ";
		 cin>>ch; break;
		}
		//  END  OF  SWITCH
   }while( (mch>0 && mch<6) || (ch=='y' || ch=='Y') );
delay(2000);
}

//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//			        END OF MAIN
//########################################################################
######




//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ
//			    H E L P   M E N U
//########################################################################
######

      void help()
	      {  coldes(13,8);
		 clrscr();
		 cout<<"
                          Welcome to online 'HELP'";
		 delay(700);

cout<<"
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 cout<<"
                  You are provided with irlines 'MENU'
";
		 cout<<"
	          According  to  your  need , you may
";
		 cout<<"
	          choose any valid option & enter your
";
		 cout<<"
                  choice . ";
		 delay(2000);
		 cout<<"
                  Example ";delay(700);
		 clrscr();
		 delay(1500);
		 cout<<"
                          Welcome to online 'HELP'";

cout<<"
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
		 delay(2000);
		 menu();
		 for(int i=0;i<53;i++)
			{
			gotoxy(i+28,19);
			puts("  ¯ÄÄ¯");
			delay(50);
			}
		 cout<<"	If your choice is reservation , 
	number to be input is 
1";
		 cout<<"			press any key to continue";
		 getch();

		 }
//ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ÄÄÄÄÄÄÄÄÄÄ

//                       E N D   O F   P R O G R A M M E

//########################################################################
####


