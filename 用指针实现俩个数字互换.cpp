# include <stdio.h>

void huhuan(int* p,int* q)
{
	int t=0;//t必须是int类型 不然会出错

	t = *p;
	*p = *q;
	*q = t;


	return;

}

int main(void)
{
	int i = 22;
	int k = 55;
	huhuan(&i, &k);//这里是取地址
	printf("i=%d,k=%d\n",i,k);


	return 0;
}
