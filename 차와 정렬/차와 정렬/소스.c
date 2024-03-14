#include <stdio.h>
#include <math.h>
#define min(a, b) (a < b ? a : b)

int dp[1000000];
int main(void)
{
	int num = 0;
	scanf_s("%d", &num);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for(int i = 1; i <= num; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if(i % 2 == 0)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}
	printf("%d", dp[num]);
	return 0;
}