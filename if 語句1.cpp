# include <stdio.h>

int main(void)

{
	if (3)//此處不加:分號不然就不進行判斷
	printf("IIII\n");
	
	if (000100)
	printf("LLLLL");//LLLLL不會輸出 應爲C語言對真假的處理 0為假

	if (0 == 0)
	printf("YYYY");//YYYY會輸出


	return 0;
}

 