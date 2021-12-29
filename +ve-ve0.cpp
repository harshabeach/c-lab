#include<stdio.h>
main()
{
	int a;
	printf("enter any one number");
	scanf("%d",&a);
	if (a>=1){
		printf("the given number is +ve");
	}
		else if(a==0){
		printf("the given number is equal to '0'");
	}
	else {
		printf("the given number is -ve");
	}

}
