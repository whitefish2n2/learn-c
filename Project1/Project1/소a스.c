#include <stdio.h>
int main(void)
{
	int star = 0;
	char ah = 289;
	scanf_s("%d", &star);
	for(int i = 0; i<star; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = star; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("%d",num);
	}
	return 0;
}