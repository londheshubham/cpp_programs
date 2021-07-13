#include<stdio.h>
 
int main()
{
  int number[3], Square,i;
  printf(" \n Please Enter any 3 integer Value : ");	 
 for(i=0;i<=2;i++)
 scanf("%d", &number[i]);
  for(i=0;i<=2;i++)
	{
  	Square = number[i] * number[i];
 	printf("\n Square of a given number %d is  =  %d", number[i], Square);
  	}
  return 0;
}
