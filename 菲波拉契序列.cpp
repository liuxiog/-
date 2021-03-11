//1 2 3 5 8 13 21 34.....
# include<stdio.h>

int main(void)
{
	int n;
	int f1, f2, f3;
	int i;

	f1 = 1;
	f2 = 2;
	

	printf("请输入你要求的序列号：");
	scanf_s("%d", &n);

	if (1 == n)
	{
		f3 = 1;
	}
	else if (2 == n)
	{
		f3 = 2;
	}
	else
	{
		for (i = 3; i <= n; ++i)//试数 n=3    n=4    n=5   n=6
		{
			f3 = f1 + f2;       //试数 f3=3   f3=5   f3=8  f3=13
			f1 = f2;            //试数 f1=2   f1=3   f1=5  f1=8
			f2 = f3;            //试数 f2=3   f2=5   f2=8  f2=13

		}                       // 第二次循环使用第一次循环结果
	}
	printf("%d",f3 );           //试数 f3=3   f3=5   f3=8  f3=13

	return 0;
}
