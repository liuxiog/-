# include <stdio.h>

int main(void)
{
	int vai;
	printf("��������Ҫ�����¥�㣺");
	scanf_s("%d", &vai);

	switch (vai)
	{
	case 1:
		printf("һ�㿪");
		break;
	case 2:
		printf("���㿪");
		break;
	case 3:
		printf("���㿪");
		break;
	default:
		printf("û�иǵ���һ��");
		break;
	}
	return 0;
}