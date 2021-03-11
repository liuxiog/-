# include <stdio.h>

int f(void) //括号中的void表示该函数不能接受数据 int表示函数返回值是int 类型
{
	return 10;//向主调函数返回10
}

void g(void)//函数名前的void表示该函数没用返回值
{
	//return 10;//error 与8行行首的void矛盾
}

int main(void)
{
	int j = 80;

	j = f();//f()括号里不能加东西
	printf("%d\n", j);

	//j = g();//error 因为g函数没用返回值
	return 0;
}