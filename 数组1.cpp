# include <stdio.h>

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };// 此处用花括号
	int i;

	for (i = 0; i < 5; ++i)
		printf("%d\n", a[i]);

	printf("%d", a[100]);





	return 0;
}
