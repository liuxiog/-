# include<stdio.h>

int main(void)
{
	int i;
	int t;
	int r;
	int f;

	i = t = 2;
	r = i++;
	f = ++t;
	printf("%d,%d,%d,%d,%d,%d", i, t, r, f,i++,++t);//i++ ++i����ԓ�����@�Y
	//�\�нY��4,4,2,3,3,4
	//r = i++������������������w���_ʽ��ֵ��i+1֮ǰ��ֵ
	//f = ++i��ǰ������ǰ�������w���_ʽ��ֵ��i+1֮���ֵ



	return 0;
}