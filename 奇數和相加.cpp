# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int k;

	printf("Ոݔ��Ҫ���攵����");
	scanf_s("%d", &k);

	for (i = 1; i < k; i += 2)//�Ȉ���i = 1 Ȼ���Д� i < k Ȼ��sum = sum + iȻ�� i += 2Ȼ��ѭ�h
		sum = sum + i;

	printf("%d", sum);


	return 0;
}