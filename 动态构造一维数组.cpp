# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int* pArr;
	int len;
	int i = 0;

	printf("��������ĳ���");
	scanf_s("%d", &len);

	pArr = (int*)malloc(4 * len);//��̬����

	printf("�������������ֵ");
	
	for (i = 0; i < len; ++i)
		scanf_s("%d", &pArr[i]);

	for (i = 0; i < len; ++i)
		printf("%d\n", pArr[i]);








	return 0;
}