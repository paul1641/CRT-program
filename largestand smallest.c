#include<stdio.h>
int main()
{
	int x,r,large=0,small=9;
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		if (large<r)
		{
			large=r;
		}
	    if (small>r)
	    {
	     	small=r;
     	 }
     	 x=x/10;
	}
	printf("%d%d",small,large);
	return 0;
}
