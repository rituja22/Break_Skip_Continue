#include<stdio.h>
int main()
{
	int i;
	int a;
	printf("At what value do you want to break the loop? \n");
	scanf("%d",&a);
	printf("\n");
	for(i=0;i<15;i++)
	{
		printf("%d \n",i+1);
		if(i==a)
		{
			break;
		}
	}
	printf("Out of loop at i = %d \n",i);
	return 0;
}
