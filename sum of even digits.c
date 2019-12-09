#include<stdio.h>
int main()
{
	int n,sum,r;
	sum=0;
	r=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(n%2==0)
		{
			sum=sum+r;
		}
		n=n/10;
	}
	printf("%d ",sum);
	return 0;
}

