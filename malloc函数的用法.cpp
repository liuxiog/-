# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
	*q = 200;

}

int main(void)
{
	int * p = (int*)malloc(4);
	*p = 10;
	printf("p=%d", *p);
	f(p);
	printf("p=%d", *p);


	return 0;
}