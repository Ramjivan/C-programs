/* Declaration Of Header Files */
#  include  <iostream>
using namespace std;

/* Start Of Main Program */
int main()
{
    
       /* Declaration Of Variables */
       int  i,  j,  r  =  0,  c  =  0;
       int  a [ 10 ][ 10 ];
      
      

       /* Asking For The Input From User */
       cout  <<  "  Enter Number Of Rows & Columns Of 2D Array [ Matrix ]  :  ";
       cin  >>  r  >>  c ;
      
       //  Accepting Values Of 2D Array [ Matrix ]
       cout  <<  "  Enter  "  <<  r  *  c  <<  "  Values for 2D Array  :  ";
       for  (  i  =  0;  i  <  r;  i++  )
       {
                for  (  j  =  0;  j  <  c;  j++  )
                {
                         cin  >>  a [ i ][ j ];
                }
       }

       // Printing Values Of 2D Array [ Matrix ]
       cout  <<  "  Values Of 2D Array [ Matrix ] Are  :  ";
       for  (  i  =  0;  i  <  r;  i++  )
       {
                
                for  (  j  =  0;  j  <  c;  j++  )
                {
                         cout <<  a [ i ][ j ];
                         cout<<"\n";
                }cout  <<  " \n ";
       }
/* Source Code For Computing Sum Of Diagonal Elements If & Only If Rows & Columns Are Equal */
int sum=0;
if(r==c)
{
   for(i=0; i<r; i++)
   {
      for(j=0; j<c; j++)
      {
         if(i+j==0 || i+j==2 || i+j==4)
         {
            sum=sum+a[i][j];
         }
      }
   }
   /* Printing The Output Onto The Screen/Console */
   cout<<"\n Sum Of Diagonal Elements Of Array Is : "<<sum;
}
else
{
   cout<<" \n Addition Is Not Possible";
}

}
