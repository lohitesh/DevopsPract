
//Function to find biggest of three numberes
#include<stdio.h>
void big();
void big()
{
  int a,b,c;
  printf("\n Enter the 3 integers numbers to check largest\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c)
    printf("The largest number is %d\n",a);
  else if(b>a&&b>c)
    printf("The largest number is %d\n",b);
  else
    printf("The largest number is %d\n",c);
 }
    
