#include <stdio.h>
#include <math.h>

int main(void)
{
	//������ϵ�����浽�������
	int a = 1;//=����ʾ���
	int b = 5;
	int c = 6;

	double delta; //delta ��ŵ��� b*b -4*a*c

	double x1;//x1��ŵ���һԪ���η��̵�һ����

	double x2;//x2��ŵ���һԪ���η��̵�һ����


	delta = b*b - 4*a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("��һԪ���η����������⣬ x1 = %lf, x2 = %lf\n", x1,x2);
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;//���ұߵ�ֵ�������
		printf("��һԪ���η�����һ���⣬ x1 = x2 =%lf\n", x1);
	}
	else
	{
		printf("��һԪ���η����޽�");
	}


	return 0;
}