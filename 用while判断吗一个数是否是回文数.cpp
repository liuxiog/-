# include<stdio.h>

int main(void)
{
	int i;
	int y;//y存放待求的数
	int t = 0;

	printf("请输入你要判断的数字：");
	scanf_s("%d", &y);

	i = y;
	while (i)
	{
		t = t * 10 + i % 10;
		i /=10 ;
	}

	if (t == y)
		printf("是回文数");
	else
		printf("不是回文数");

	return 0;
}