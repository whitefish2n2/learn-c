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

	printf("이름: %s", name);
	printf("나이 : %d", age);
	printf("부서코드 : %c", code);
	printf("보안키 : %f", key);
	return 0;
}
