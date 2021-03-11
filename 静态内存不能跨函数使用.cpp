# include <stdio.h>

void f(int** q)
{
	int i = 5;
	*q = &i;
}

int main(void)
{
	int* p;
	f(&p);
	printf("%d",*p );//f函数结束会释放i的内存 所以是错的



	return 0;
}