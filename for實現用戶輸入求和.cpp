# include <stdio.h>

int main(void)
{
	int j;
	int i;
	int sum = 0;
	printf("i(��Сֵ)=");
		scanf_s("%d", &i);

		printf("j(���ֵ)=");
			scanf_s("%d", &j);


	for (i; i <= j; ++i)
		sum = sum + i;//sun+i����sun+1!!

	printf("sum=%d\n", sum);



	return 0;
}