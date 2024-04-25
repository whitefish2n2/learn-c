#include <stdio.h>
int main(void)
{
	int i = 0;
	char arr[100];
	scanf_s("%s", &arr);
	while (arr[i] != '\0')
	{
		printf("%c\n", arr[i]);
		i++;
	}
}

