#include<stdio.h>

void main()
{
	for (int i = 1; i < 10; i++)
	{
		printf(" ");
		for (int j = 1; j < i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}