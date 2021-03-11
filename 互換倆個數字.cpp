# include <stdio.h>
//利用y實現i與k的互換
int main(void)
{
	int i=9;
	int k=4;
	int y=7;

	(y = i, i = k, k = y);
	printf("i=%d,k=%d,y=%d",i,k,y);


		return 0;
}//運行結果為；i=4,k=9,y=9