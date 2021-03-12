# include <stdio.h>


void star(int* q ,int len)
{
	int i, j, t;

	for(i=0;i<len-1;++i)//只判断5-1次 规律
		for(j=0;j<(len-1-i);++j)
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

	int a[5] = { 2,8,6,9,4 };
	star(a, 5);
	
	for (k = 0; k < 5; ++k)
		printf("%d  ", a[k]);



	return 0;
}