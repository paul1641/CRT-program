#include<stdio.h>
int main()
{
	int n,r,p;
	p=n;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n/=10;
	}
	if(p==r)
	{
		printf("the number is palindrome");
		
	}
	else
	{
		printf("the number is not palindrome");
	}
	return 0;
}
