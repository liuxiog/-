# include<stdio.h>

void g(int*b, int r)
{
	b[2] = 55;//b����a *b��a �����еĵ�һ��Ԫ��
}

void f(void)
{
	int a[4] = {4, 5, 6, 1};//�˴�Ӧ�ǻ�����

	g(a ,4);//a ��int*����
	printf("%d", a[2]);
}

int main(void)
{
	f();
	return 0;
}