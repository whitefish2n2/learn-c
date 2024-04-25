#include <stdio.h>
int main(void)
{
	int a, b, c, max, middle, min;
	printf("세정수입력");
	scanf_s("%d %d %d", &a, &b, &c);
	if(a>b&&a>c)
	{
		if (b > c)
			max = a, middle = b, min = c;
		else
			max = a, middle = c, min = b;
	}
	if (b > a && b > c)
	{
		if (a > c)
			max = b, middle = a, min = c;
		else
			max = b, middle = c, min = a;
	}
	else
	{
		if (a > b)
			max = c, middle = a, min = b;
		else
			max = c, middle = a, min = c ;
	}
	printf("%d %d %d", max, middle, min);
}