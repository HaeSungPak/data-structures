#include<stdio.h>

int main()
{
	int i = 10, j = 20;
	int *ptr;

	ptr = &i;
	ptr = &i;

	printf("%d %d\n", i, j);
}