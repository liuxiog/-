# include<stdio.h>

void g(int*b, int r)
{
	b[2] = 55;//b就是a *b是a 数组中的第一个元素
}

void f(void)
{
	int a[4] = {4, 5, 6, 1};//此次应是花括号

	g(a ,4);//a 是int*类型
	printf("%d", a[2]);
}

int main(void)
{
	f();
	return 0;
}