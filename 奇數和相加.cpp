# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int k;

	printf("請輸入要求奇數上限");
	scanf_s("%d", &k);

	for (i = 1; i < k; i += 2)//先執行i = 1 然後判斷 i < k 然後sum = sum + i然後 i += 2然後循環
		sum = sum + i;

	printf("%d", sum);


	return 0;
}