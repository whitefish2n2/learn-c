#include <stdio.h>

int main(void)
{
	int age;
	char name[10];
	char code;
	double key;
	scanf("%s",name);
	scanf("%d", &age);
	scanf("%c", &code);
	scanf("%lf", &key);

	printf("�̸�: %s", name);
	printf("���� : %d", age);
	printf("�μ��ڵ� : %c", code);
	printf("����Ű : %f", key);
	return 0;
}
