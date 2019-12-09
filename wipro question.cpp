#include<stdio.h>
int main()
{
	int x,r,s=0;
	printf("enter the number");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		if(r==8)
		{
			s=s+2;
		}
		else if(r==4)
		{
			s=s+2;
		}
		else if(r==0 || r==6 || r==9)
		{
			s=s+1;
		}
		x/=10;
	}
	printf("the sum is :%d",s);
	return 0;
	
}
