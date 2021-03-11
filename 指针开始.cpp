# include <stdio.h>

int main (void)
{
int* p;
int i = 10;
p = &i;

printf("%d,%d,%d",p,i,*p);




return 0;
}