struct numbers
{
	int num1;
	int num2;
};

#include<stdio.h>
int main (void)
{
	int a = 1, b = 3;
	struct numbers n1, n2;
	printf("�� �� �Է�");
	scanf_s("%d %d", &n1.num1, &n1.num2);
	n2.num1 = n1.num1;
	n2.num2 = n1.num2;
	if (a < b)
		printf("%d + %d = %d\n",n1.num1 , n1.num2, n1.num1 + n1.num2);//a�� b�� ���ϴ� �ڵ�~
	else
		printf("%d - %d = %d\n", a, b, a - b);/*a���� b�� ���� �ڵ�~ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
	¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ
	��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ��ġ¦~*/
	printf("a�� �ּҴ� %p�Դϴ�.", &a);
	return 0;
}