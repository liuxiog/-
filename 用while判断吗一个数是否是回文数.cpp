# include<stdio.h>

int main(void)
{
	int i;
	int y;//y��Ŵ������
	int t = 0;

	printf("��������Ҫ�жϵ����֣�");
	scanf_s("%d", &y);

	i = y;
	while (i)
	{
		t = t * 10 + i % 10;
		i /=10 ;
	}

	if (t == y)
		printf("�ǻ�����");
	else
		printf("���ǻ�����");

	return 0;
}