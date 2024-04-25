#include <stdio.h>
int main(void)
{
	int sung;
	int result = 2;
	printf("2ÀÇ ¸î ½Â? : ");
	scanf_s("%d",&sung);
	if(sung==0)
	{
		printf("2ÀÇ 0½ÂÀº 1");
		return 0;
	}
	for(int i = 1; i<sung; i++)
	{
		result <<= 1;
	}
	printf("2ÀÇ %d½ÂÀº %d",sung, result);
	return 0;
}