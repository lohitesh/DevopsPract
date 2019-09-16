#include<stdio.h>
void pal()
{
	int num,digit,rev=0,temp;
	printf("\nEnter the number to check Palindrome or not\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{ 	digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	if(temp==rev)
		printf("\n%d is a palindrome\n",temp);
	else
  		printf("\n%d is not a palindrome\n",temp);
}
  
