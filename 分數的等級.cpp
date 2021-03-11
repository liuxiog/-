# include <stdio.h>

int main(void)
{
	float score;//score 分數

	printf("請輸入分數:"); 
	scanf_s("%f", & score);//"%f"后應加，（逗號）

	if (score > 100)
		printf("你輸入有誤\n");
	else if (score <= 100 && score >= 90)//此處不能寫成90<=score<=100不然輸出一直為1
		printf("良好\n");
	else if (score <= 90 && score >= 60)
		printf("中等\n");
	else if (score >= 0 && score <= 60)
		printf("不及格\n");
	else
		printf("你輸入的成績過低");





	return 0;
}