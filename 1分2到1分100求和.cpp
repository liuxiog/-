# include<stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i < 100; ++i)
		sum = sum + 1.0 / i;//1後面加小數點0可轉換類型 幾個零無所謂 doubie類型
	printf("%f", sum);





	return 0;
}