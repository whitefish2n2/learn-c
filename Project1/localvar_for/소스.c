#include <stdio.h>
int main(void)
{
	int sung;
	int result = 2;
	printf("2�� �� ��? : ");
	scanf_s("%d",&sung);
	if(sung==0)
	{
		printf("2�� 0���� 1");
		return 0;
	}
	for(int i = 1; i<sung; i++)
	{
		result <<= 1;
	}
	printf("2�� %d���� %d",sung, result);
	return 0;
}