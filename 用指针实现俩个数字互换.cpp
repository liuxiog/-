# include <stdio.h>

void huhuan(int* p,int* q)
{
	int t=0;//t������int���� ��Ȼ�����

	t = *p;
	*p = *q;
	*q = t;


	return;

}

int main(void)
{
	int i = 22;
	int k = 55;
	huhuan(&i, &k);//������ȡ��ַ
	printf("i=%d,k=%d\n",i,k);


	return 0;
}
