#include <stdio.h>
int main(void)
{
	int h, m, mi;
	scanf_s("%d %d", &h, &m);
	printf("�� �� ���ðڽ��ϱ�?");
	scanf_s("%d", &mi);
	int ma = m - mi;
	int ha = h;
	for (; ma > 0 && ha > 0;) {
		if (ma < 0)
		{
			ha--;
			ma = 60 + ma;
		}
		if (ha < 0)
		{
			ha = 24 + ha;
		}
		printf("%d %d", ha, ha);
	}
}