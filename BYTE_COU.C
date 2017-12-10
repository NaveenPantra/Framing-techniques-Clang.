#include<stdio.h>
#include<conio.h>
//#include<string.h>
void main()
{
  int data[10]={2,1,3,2,1,5,3,2,1,0},k=0,i=0,j=0,frame=1,n=10;
  clrscr();
  while( i < n )
  {
    printf("\nFRAME : %d = ",frame);
    j=data[i];
    k=0;
    while(k < j && i < n)
    {
      printf(" %d",data[i]);
      i++;
      k++;
    }
    frame++;
  }
  getche();
}