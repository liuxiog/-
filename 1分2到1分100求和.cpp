# include<stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i < 100; ++i)
		sum = sum + 1.0 / i;//1�����С���c0���D�Q��� �ׂ���o���^ doubie���
	printf("%f", sum);





	return 0;
}