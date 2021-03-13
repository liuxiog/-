# include<stdio.h>
# include<malloc.h>
int len;


struct student 
{
	int age;
	float fengsu;
};
void Inputstudent(struct student*);
void Outputstudent(struct student*);
void maopao(struct student* sq);

int main(void)
{
	struct student sy;

	Inputstudent(&sy);
	maopao(&sy);
	Outputstudent(&sy);



	return 0;
}
void Inputstudent(struct student*st)
{
	int i;
	
    printf("输入学生的个数：");
    scanf_s("%d", &len);
	
	for (i = 1; i < len; ++i)
	{
		printf("输入年龄：");
		scanf_s("%d",&st->age);
		printf("输入fengsu");
		scanf_s("%f",&st->fengsu);
	}
}
void maopao(struct student* sq)
{
	int i;
	int j;
	struct student t;
	for(i=0;i<len-1;++i)
		for (j = 1; j < len - 1 - i; ++j)
			if (sq[j].age > sq[j + 1].age)
			{
				t = sq[j];
				sq[j] = sq[j + 1];
				sq[j + 1] = t;
		    }

		
}


void Outputstudent(struct student* sp)
{
	int i;
	for (i = 1; i < len; +i)
	{
		printf("%d", sp->age);
		printf("%f", sp->fengsu);
	}

}