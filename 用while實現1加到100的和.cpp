# include<stdio.h>

int main(void)
{
	int i;
	int sum=0;

	i = 0;
	while (i < 101)//i���e��ʲ�ᶼ���@ʾ
	{
		sum = sum + i;
		++i;
	}

	printf("%d", sum);

	return 0;
}