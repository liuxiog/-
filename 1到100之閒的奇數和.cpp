# include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 101; ++i)
	{
	   if (i % 2 == 1)
	   sum = sum + i;
    }// 花括號可加可不加

	printf("%d", sum);




	return 0;
}