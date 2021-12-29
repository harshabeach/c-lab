#include<stdio.h>
main()
{
	char a;
	printf("enter any character");
	scanf("%c",&a);
	switch(a>=65 && a>=97)
	{
		case 1 :
			printf("character");
			break;
		case 0:
			switch(a>=0 && a<=9)
			{
				case 1:
					printf("number");
					break;
			}
	}
	
}
