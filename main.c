#include<stdio.h>
#include<conio.h>
#include<math.h>
char square[9]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int n;
void draw()
{
 clrscr();
 printf("tic tac toe v1\n");
 printf("Player 1(X) - Player 2(O)\n\n");
printf("\t|\t|\t\n");
printf(" %c\t| %c\t| %c\t\n",square[0],square[1],square[2]);
printf("________|_______|________\n");
printf("\t|\t|\t\n");
printf(" %c\t| %c\t| %c\t\n",square[3],square[4],square[5]);
printf("________|_______|________\n");
printf("\t|\t|\t\n");
printf(" %c\t| %c\t| %c\t\n",square[6],square[7],square[8]);
printf("\t|\t|\t\n");
}


void input()
{
 char ch;
 printf("press no.\n");
 scanf("%d",&n);
 switch(ch)
 {
 case 1:
  if(square[0]=='1')
 {
  square[0]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
 case 2:
   if(square[1]=='2')
 {
  square[1]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
 case 3:
  if(square[2]=='3')
 {
  square[2]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
 case 4:
 if (square[3]=='4')
 {
 square[3]=player;
 }
 else
 {
 printf("its already entered plz try again\n");
 }
 case 5:
  if(square[4]=='5')
 {
  square[4]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
 case 6:
 if(square[5]=='6')
 {
 square[5]=player;
 }
 else
 {
 printf("its already entered plz try again\n");
 }
 case 7:
  if (square[6]=='7')
 {
  square[6]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
 case 8:
  if(square[7]=='8')
 {
  square[7]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
 case 9:
  if(square[8]=='9')
 {
  square[8]=player;
 }
  else
 {
  printf("its already entered plz try again\n");
 }
}
}

void toggleplayer()
{
 if(player=='X')
 {
 player='O';
 }
 else
 {
 player='X';
}
}


char win()
{
if(square[0]=='X' && square[1]=='X' && square[2]=='X')
{
return 'X';
}
if(square[3]=='X' && square[4]=='X' && square[5]=='X')
{
return 'X';
}
if(square[6]=='X' && square[7]=='X' && square[8]=='X')
{
return 'X';
}
if(square[0]=='X'&& square[4]=='X' && square[8]=='X')
{
return 'X';
}
if(square[2]=='X' && square[4]=='X' && square[6]=='X')
{
return 'X';
}
if(square[0]=='O' && square[1]=='O' && square[2]=='O')
{
return 'O';
}
if(square[3]=='O' && square[4]=='O' && square[5]=='O')
{
return 'O';
}
if(square[6]=='O'&& square[7]=='O'&& square[8]=='O')
{
return 'O';
}
if(square[0]=='O'&& square[4]=='O'&& square[8]=='O')
{
return 'O';
}
if(square[2]=='O'&& square[4]=='O'&& square[6]=='O')
{
return 'O';
}
return -1;
}

void main()
{
 n=0;
 draw();
 while(1)
 {
  n++;
  input();
  draw();
  if(win()=='X')
  {
   printf(" player X wins\n");
   break;
  }
  else if(win()=='O')
  {
   printf(" player O wins\n");
   break;
  }
  else if(win()=='/'|| n==9)
  {
   printf("draw \n");
   break;
  }
  toggleplayer();
 }
}
