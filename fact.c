//Function to find factorial of a number
#include<stdio.h>
void fact();
void fact()
{
  int i,num,fact=1;
  printf("\nEnter the number to find factorial of a number\n");
  scanf("%d",&num);
  if(num>0)
  { for(i=1;i<=num;i++)
      fact=fact*i;
    printf("\nThe factorial of a number is %d\n",fact);
  }
  else
  {
  printf("\nPlease enter the number greater than 0\n");
  }
}
