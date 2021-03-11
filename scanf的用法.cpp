# include <stdio.h>

int main(void)
{
	int i, j, n;

	printf ("请输入三个数字然后按回车键:");
	scanf_s ("m%d  %d  m%d", &i,&j,&n);//m为非输出控制符 需要加上
	printf("%d %d %d", i, j, n);





	return 0;
}