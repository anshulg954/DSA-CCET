#include<stdio.h>
main()
{
	int i,j,a,num;
	/* 	  *
		* * *
	  * * * * *
	*/
	printf("Enter no. of rows on one side\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		for(a=200;a>i;a--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=num-1;i>=0;i--)
	{
		for(a=200;a>i;a--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
