# include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int j = 0;
	

	for (i = 1; i < 100; ++i)
	{
		if (i % 2 == 1 )
	    sum = sum + i;
		
	}

	printf("sum=%d\n", sum);

	for (i = 2; i < 101; ++i)
	{
		if (i % 2 == 0)
			j = j + i;
	}
	printf("j=%d", j);

	return 0;
}