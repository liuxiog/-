# include <stdio.h>
# include <malloc.h>

void f(int** p)
{
	*p = (int*)malloc(sizeof(int));//�ȼ� q = (int*)malloc(sizeof(int))
	**p = 10;//*q =10  ����Ҫһ��

}

int main(void)
{
	int* q;

	f(&q);
	printf("%d", *q);

	return 0;
}