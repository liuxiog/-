# include <stdio.h>

int f(void) //�����е�void��ʾ�ú������ܽ������� int��ʾ��������ֵ��int ����
{
	return 10;//��������������10
}

void g(void)//������ǰ��void��ʾ�ú���û�÷���ֵ
{
	//return 10;//error ��8�����׵�voidì��
}

int main(void)
{
	int j = 80;

	j = f();//f()�����ﲻ�ܼӶ���
	printf("%d\n", j);

	//j = g();//error ��Ϊg����û�÷���ֵ
	return 0;
}