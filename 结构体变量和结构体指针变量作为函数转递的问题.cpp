# include <stdio.h>
# include <string.h>

struct student
{
	int age;
	char sex;
	char name[100];
};//�ֺŲ���ʡ

void Inputstudent(struct student *);
void Outputstudent(struct student*);

int main(void) 
{

	struct student st;
	printf("%d\n", sizeof(st));

	Inputstudent(&st);
	Outputstudent(&st);

	return 0;
}

void Outputstudent(struct student* pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

void Inputstudent(struct student* pstu)
{
	(*pstu).age = 10;
	strcpy_s(pstu->name, "����");//_sҪ�� ��scanf_sһ��
	pstu->sex = 'F';
}