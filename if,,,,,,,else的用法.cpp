# include <stdio.h>

int main(void)
{
	int i, j;
	printf("請分別輸入i，j的值中間以空格隔開\n");
	scanf_s("%d %d", &i,&j);

	if (i > j)
		printf("i比j大");

	else
		printf("i比j小");

		return 0;
}