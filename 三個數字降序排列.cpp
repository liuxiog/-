# include <stdio.h>

int main(void)
{
	int a, b, c;
	int t = 0 ;
	printf("請輸入三個數字中間以空格隔開：");
	scanf_s("%d %d %d,", &a, &b, &c);//輸入空字符閒不加東西

	if (a < b)//互換倆數（下同）

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