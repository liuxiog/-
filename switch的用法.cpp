# include <stdio.h>

int main(void)
{
	int vai;
	printf("请输入你要到达的楼层：");
	scanf_s("%d", &vai);

	switch (vai)
	{
	case 1:
		printf("一层开");
		break;
	case 2:
		printf("二层开");
		break;
	case 3:
		printf("三层开");
		break;
	default:
		printf("没有盖到这一层");
		break;
	}
	return 0;
}