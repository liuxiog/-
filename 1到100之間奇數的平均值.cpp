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
		}//����̖������ ��t�Y�����e
	}
	p = 1.0*sum / j;//1.0Ĭ�J��double���

	printf("%f", p);




	return 0;
}