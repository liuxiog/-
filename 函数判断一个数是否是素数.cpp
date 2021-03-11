#include <stdio.h>

bool sushu(int m)
{
	int i;
	
	for (i = 2; i < m; ++i)
	{
		if (m % i == 0)//此次为两个等于号
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}





int main(void)
{
	int p;
	printf("输入你要求的数字：");
	scanf_s("%d", &p);

	if (sushu(p))
		printf("是素数");
	else
		printf("不是素数");



	return 0;
}