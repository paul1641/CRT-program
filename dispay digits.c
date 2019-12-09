#include<stdio.h>
int main()
{
	int n,r;
	r=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		printf("%d ",r);
	}
	return 0;
}

