# include <stdio.h>

int main(void)
{
	int j;
	int i;
	int sum = 0;
	printf("i(最小值)=");
		scanf_s("%d", &i);

		printf("j(最大值)=");
			scanf_s("%d", &j);


	for (i; i <= j; ++i)
		sum = sum + i;//sun+i不是sun+1!!

	printf("sum=%d\n", sum);



	return 0;
}