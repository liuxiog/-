# include <stdio.h>


void star(int* q, int len)
{
	int i, j, t;

	for (i = 0; i < len - 1; ++i)//只判断5-1次 规律
		for (j = 0; j < (len - 1 - i); ++j)
			if (q[j] > q[j + 1])
			{
				t = q[j];
				q[j] = q[j + 1];
				q[j + 1] = t;
			}



}
int main(void)
{
	int k;

	int a[50] = { 2,8,6,9,4,55,66,48,95,32,15,42,16,54,87,65,12,35,45,65,87,47,15,21,35,26,45,78,98,95,96,94,954,78,12,45,32,65,87,45,12,65,45,21,78,65,45,12,32,45 };
	star(a, 50);

	for (k = 0; k < 50; ++k)
		printf("%d  ", a[k]);



	return 0;
}