# include<stdio.h>

int main(void)
{
	int i;
	int sum=0;

	i = 0;
	while (i < 101)//i打錯會什麽都不顯示
	{
		sum = sum + i;
		++i;
	}

	printf("%d", sum);

	return 0;
}