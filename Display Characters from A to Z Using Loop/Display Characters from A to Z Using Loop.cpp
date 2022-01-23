//C Program to Display Characters from A to Z
#include<stdio.h>
int main()
{
	int c, i;
	printf("Enter 1 to display uppercase alphabets \n");
	printf("Enter 2 to display lowercase alphabets \n");
	scanf_s("%d", &i);
	if (i==1)
	{
		for (c = 'A'; c <= 'Z'; c++)
			printf("%c ",  c);
	}
	else if (i == 2)
	{
		for (c = 'a'; c <= 'z'; c++)
			printf("%c ",  c);
	}
	else
	{
		printf("Error! You entered an invalid character.");
	}
	return 0;
}