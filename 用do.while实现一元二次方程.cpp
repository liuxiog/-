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
			printf("�����뷽�̵�ϵ��:");

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
				printf("�÷����������⣬x1=%lf,x2=%lf\n", x1, x2);
			}
			else if (delta == 0)
			{
				x1 = x2 = (-b / (2 * a));
				printf("�÷�����һ���⣬x1=x2=%lf\n", x1, x2);
			}
			else
			{
				printf("�÷����޽�/n");
			}

			printf("�Ƿ����(Y/N)��\n");// ��Y��y����  ���������˳�
			scanf_s(" %c", &ch);//%cǰ������һ���ո� �հ׷�����
		}
		while ('y' == ch || 'Y' == ch);



	return 0;
}