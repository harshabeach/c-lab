#include<stdio.h>
main()
{
	int i,n;
	i = 2;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
			{
				printf("it's not a prime number");break;
			}
			else
			{
				printf("it's a prime number"); break;
			}
			i++;
    }
}
