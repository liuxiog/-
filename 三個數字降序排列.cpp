# include <stdio.h>

int main(void)
{
	int a, b, c;
	int t = 0 ;
	printf("Ոݔ�������������g�Կո���_��");
	scanf_s("%d %d %d,", &a, &b, &c);//ݔ����ַ��f���Ӗ|��

	if (a < b)//���Q�z������ͬ��

	{
		t = a;
		a = b;
		b = t;
	}


	

	if (a < c)

	{
		t = a;
		a = c;
		c = t;
	}
	
	if (b < c)

	{
		t = b;
		b = c;
		c = t;
	}
	

	printf("%d,%d,%d",a,b,c);




	return 0;
}