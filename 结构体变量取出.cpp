# include <stdio.h>

struct student
{
	int age;
	float heiget;
	char name;
};

int main(void)
{
	struct student st = { 18,175.2,'lm' };
	struct student* qq = &st;
	st.heiget = 175.2f;
	(qq)->age = 18;
	printf("%f,%d", st.heiget, qq->age);


	return 0;
}