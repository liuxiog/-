#include <stdio.h>

bool sushu(int m)
{
	int i;
	
	for (i = 2; i < m; ++i)
	{
		if (m % i == 0)//�˴�Ϊ�������ں�
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
	printf("������Ҫ������֣�");
	scanf_s("%d", &p);

	if (sushu(p))
		printf("������");
	else
		printf("��������");



	return 0;
}