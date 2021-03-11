# include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int j = 0;
	float p = 0;

	for (i = 1; i < 100; ++i)
	{
		if (i % 2 == 1)
		{
			sum = sum + i;
			j = j + 1;
		}//花括號不能少 否則結果出錯
	}
	p = 1.0*sum / j;//1.0默認是double類型

	printf("%f", p);




	return 0;
}