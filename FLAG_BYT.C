#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  int i = 0,j = 0,count=0,n=3;
  char data[10]={"a**b*c*"} , data1[10] , data2[10];
  clrscr();
  printf("THE ACTUAL DATA IN THE FRAME : %s",data);
  //CODE FOR ENCODING THE FRAME
  while(i < strlen(data))
  {
    if(data[i] == '*')
    {
      data1[j] = '*';
      j++;
      data1[j] = '*';
      j++;
      i++;
    }
    else
    {
      data1[j] = data[i];
      j++;
      i++;
    }
  }
  data1[j] = '\0';
  printf("\nTHE ENCODED DATA IS : %s",data1);
  //CODE FOR DECODING THE FRAME
  i=0;j=0;count=0;
  while(i < strlen(data1))
  {
    if(data1[i] == '*')
    {
      count++;
      if(count == 2)
      {
	count = 0;
	i++;
	continue;
      }
      else
      {
	data2[j] = data1[i];
	i++;
	j++;
      }
    }
    else
    {
      data2[j] = data1[i];
      j++;
      i++;
    }
  }
  data2[j] = '\0';
  printf("\nTHE DECODED DATA IS : %s", data2 );
  getche();
}