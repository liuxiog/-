# include <stdio.h>
//����y���Fi�ck�Ļ��Q
int main(void)
{
	int i=9;
	int k=4;
	int y=7;

	(y = i, i = k, k = y);
	printf("i=%d,k=%d,y=%d",i,k,y);


		return 0;
}//�\�нY���飻i=4,k=9,y=9