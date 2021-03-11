# include<stdio.h>

int main(void)
{
	int a[3][4] = {
              {1,2,3,10},
              {4,5,6,11},
              {7,8,9,12},
              
	};
    int i;
    int j;

    for (i = 0; i < 3; ++i)
    {   
        
        for (j = 0; j < 4; ++j)
            printf("%-5d  ", a[i][j]);
        printf("\n");
    }

       // 1      2      3      10
          4      5      6      11
          7      8      9      12












	return 0;
}