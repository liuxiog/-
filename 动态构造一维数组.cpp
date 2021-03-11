# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int* pArr;
	int len;
	int i = 0;

	printf("输入数组的长度");
	scanf_s("%d", &len);

	pArr = (int*)malloc(4 * len);//动态数组

	printf("依次输入数组的值");
	
	for (i = 0; i < len; ++i)
		scanf_s("%d", &pArr[i]);

	for (i = 0; i < len; ++i)
		printf("%d\n", pArr[i]);








	return 0;
}