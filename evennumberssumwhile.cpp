#include<stdio.h>
main()
{
	int i,n,sum;
	sum = 0;
	i= 2;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		i+=2;
		sum = sum + i;
	}
	printf("%d\n%d\n",n,sum);
}
