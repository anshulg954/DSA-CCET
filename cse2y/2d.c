#include<stdio.h>
main()
{
	int arr[100][200],i,j;
	printf("Enter the elments");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Reqd array is");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}
}

