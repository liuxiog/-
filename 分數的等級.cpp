# include <stdio.h>

int main(void)
{
	float score;//score �֔�

	printf("Ոݔ��֔�:"); 
	scanf_s("%f", & score);//"%f"�󑪼ӣ�����̖��

	if (score > 100)
		printf("��ݔ�����`\n");
	else if (score <= 100 && score >= 90)//��̎���܌���90<=score<=100��Ȼݔ��һֱ��1
		printf("����\n");
	else if (score <= 90 && score >= 60)
		printf("�е�\n");
	else if (score >= 0 && score <= 60)
		printf("������\n");
	else
		printf("��ݔ��ĳɿ��^��");





	return 0;
}