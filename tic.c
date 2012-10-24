#include<stdio.h>
char a[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
char player1='x',player2='0';
void display();
int result();
void get_userinput1();
int main()
{
printf("------------Ashok Kashyap presents Tic Tac Toe--------------------\n");
printf("\tThe game will begin with player0 turn\n");
printf( "\t'x' will be assigned to player0 and '0' to player1\n");
int a=0,c;
display();
while(a<9)
{
get_userinput1();
 a=a+1;
printf("--------a=%d\n",a);
  if(a>4)
   {
//code for debuging  
  c=result();
  printf("--------c=%d\n",c);
     if('x'==c)
      {
       printf("::player 1 wins\n");
       break;
      }
     else if('0'==c)
      {
      printf("player 2 wins\n");
       break;
      }
    else if(9==a&&1==c)
     {
     printf("draw\n");
      break;
     }
  }
 
 get_userinput1();
 a=a+1;
}
return 0;
}
//functions definition

void display()
{
 int i,j;
 for(i=0;i<=2;i++)
 {
 printf("\t\t%2c|%2c|%2c\n",a[i][0],a[i][1],a[i][2]);
 }
}

void get_userinput1()
{
 static int i=0;
 char move,position;
 int row_no,col_no;
 __fpurge(stdin);
 printf("player%d:turn:\n",i%2);
 printf("enter position row-no=");
 row_no=getchar()-'0';
 __fpurge(stdin);
 printf("enter position col-no=");
 col_no=getchar()-'0';
 __fpurge(stdin);
 //printf("please enter your move:");
 //move=getchar();
if(i%2==0)
move='x';
else
move='0';
 a[row_no][col_no]=move;
 printf("your move is --%c\n",move);
 display();
 i++;
}

int result()
{
 char x;
 int i,j;
 for(i=0;i<=2;i++)
 {
  if(a[i][0]=='x'&&a[i][1]=='x'&&a[i][2]=='x')
  return ('x');
  else if(a[i][0]=='0'&&a[i][1]=='0'&&a[i][2]=='0') 
  return ('0');
 }
 for(j=0;j<=2;j++)
 {
  if(a[0][j]=='x'&&a[1][j]=='x'&&a[2][j]=='x')
  return ('x');
  else if(a[0][j]=='0'&&a[1][j]=='0'&&a[2][j]=='0') 
  return ('0');
 }
 if(a[0][0]=='x'&&a[1][1]=='x'&&a[2][2]=='x')
  return ('x');
 else if((a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0'))
  return ('0');
 else if((a[0][2]=='x'&&a[1][1]=='x'&&a[2][0]=='x' ))
  return ('x');
 else if((a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]=='0'))
  return ('0');
else 
return 1;
}




