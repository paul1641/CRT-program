#include<stdio.h>
int main()
{
	int x,sum;
	printf("enter the number");
	scanf("%d%d",&x,&sum);
	while(x<=sum)
	{
		if(x%3==0 && x%5==0)
		{
			printf("%d ",x);
		}
		x++;
	}
	return 0;
}
