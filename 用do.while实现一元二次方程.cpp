# include <stdio.h>
# include <math.h>

int main(void)

{       
	    double a, b, c;
		double delta;
		double x1, x2;
		char ch;

		do
		{
			printf("请输入方程的系数:");

			printf("a=");
			scanf_s("%lf", &a);

			printf("b=");
			scanf_s("%lf", &b);

			printf("c=");
			scanf_s("%lf", &c);

			delta = b * b - 4 * a * c;
			if (delta > 0)
			{
				x1 = (-b + sqrt(delta)) / 2 * a;
				x2 = (-b - sqrt(delta)) / 2 * a;
				printf("该方程有俩个解，x1=%lf,x2=%lf\n", x1, x2);
			}
			else if (delta == 0)
			{
				x1 = x2 = (-b / (2 * a));
				printf("该方程有一个解，x1=x2=%lf\n", x1, x2);
			}
			else
			{
				printf("该方程无解/n");
			}

			printf("是否继续(Y/N)：\n");// 按Y或y继续  按其他键退出
			scanf_s(" %c", &ch);//%c前面必须加一个空格 空白符问题
		}
		while ('y' == ch || 'Y' == ch);



	return 0;
}