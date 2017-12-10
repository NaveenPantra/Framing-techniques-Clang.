#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char data[10] = "011111101", data1[10], data2[10];
  int i = 0,j = 0,count = 0;
  clrscr();
  printf("THE ACTUAL DATA TO BE ENCODED : %s",data);
  while (i < strlen(data) )
  {
    if(data[i] == '1')
    {
      //count++;
      if(count == 5)
      {
	count = 0;
	data1[j] = '0';
	j++;
      }
      else
      {
	data1[j] = data[i];
	j++;
	i++;
      }
      count++;
    }
    else
    {
      count = 0;
      data1[j] = data[i];
      j++;
      i++;
    }
  }
  if(count == 5)
  {
    data1[j] = '0';
    j++;
  }
  data1[j]='\0';
  printf("\nTHE ENCODED DATA : %s",data1);
  getche();
}