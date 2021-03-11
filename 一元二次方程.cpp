#include <stdio.h>
#include <math.h>

int main(void)
{
	//吧三个系数保存到计算机中
	int a = 1;//=不表示相等
	int b = 5;
	int c = 6;

	double delta; //delta 存放的事 b*b -4*a*c

	double x1;//x1存放的事一元二次方程的一个解

	double x2;//x2存放的是一元二次方程的一个解


	delta = b*b - 4*a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("该一元二次方程有俩个解， x1 = %lf, x2 = %lf\n", x1,x2);
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;//把右边的值赋给左边
		printf("该一元二次方程有一个解， x1 = x2 =%lf\n", x1);
	}
	else
	{
		printf("该一元二次方程无解");
	}


	return 0;
}