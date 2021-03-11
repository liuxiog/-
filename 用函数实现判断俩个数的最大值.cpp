# include <stdio.h>


void max (int i, int j)//void²»ÓÃ¼ÓÀ¨ºÅ
{
	if (i > j)
		printf("%d\n", i);
	else
		printf("%d\n", j);


}

int main(void)
{
	int a, b, c, d, e,  f, g ;
	a = 45, b = 55, c = 2, d = 6, e = 32, f = 324;
	max(a, b);
	max(c, d);
	max(e, f);






	return 0;
}