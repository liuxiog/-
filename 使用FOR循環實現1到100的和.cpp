# include <stdio.h>

int main(void)
{
	
	int i;
	int sum = 0;
	
	for (i=1; i <= 100; ++i)
		sum = sum + i;//sun+i²»ÊÇsun+1!!

	printf("sum=%d\n", sum);



	return 0;
}
