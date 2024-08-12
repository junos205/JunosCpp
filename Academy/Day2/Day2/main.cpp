#include <iostream>

using namespace std;

void main()
{
	int age = 0;
	char name[100] = "";

	printf("나이를 입력해 주세요 >> ");
	scanf_s("%d", &age);

	printf("이름을 입력해 주세요 >> ");
	scanf_s("%s",name, (int)sizeof(name));

	printf("제 나이는 %d살이고, 이름은 %s입니다", age, name);
}