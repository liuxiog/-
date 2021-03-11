# include<stdio.h>

int main(void)
{
	int i;
	int t;
	int r;
	int f;

	i = t = 2;
	r = i++;
	f = ++t;
	printf("%d,%d,%d,%d,%d,%d", i, t, r, f,i++,++t);//i++ ++i不應該寫在這裏
	//運行結果4,4,2,3,3,4
	//r = i++為后自增，后自增整體表達式的值是i+1之前的值
	//f = ++i為前自增，前自增整體表達式的值是i+1之後的值



	return 0;
}