#include <stdio.h>
int pf(int a) /*平方运算*/
{
	int answer = a*a;
	return answer;
}
int zh(int s1,int s2,int s3) /*综合成绩运算*/
{
	int pj = (s1+s2+s3)/3;
	int fc = (pf(pj-s1)+pf(pj-s2)+pf(pj-s3))/3;
	return 3*pj - fc/3;
}
typedef struct /*最后需要输出分数由高到低对应的人名，考虑运用结构体，命名为Student*/
{
	char name[100];
	int score;
} Student;
void swap(Student *a,Student *b) /*交换两个学生*/
{
	Student temp = *a;
	*a = *b;
	*b = temp;
}
void StudentsSort(Student students[]) /*按照成绩由高到低进行排序*/
{
	for(int i = 0;i<2;i++)
	{
		for(int j = 0;j<2-i;j++)
		{
			if(students[j].score < students[j+1].score)
			{
				swap(&students[j],&students[j+1]);
			}
		}
	}
}
int main()
{
	int x1,x2,x3;
	int y1,y2,y3;
	int z1,z2,z3;
	printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &y1, &y2, &y3);
    printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &z1, &z2, &z3);
    int zh1 = zh(x1,x2,x3);
    int zh2 = zh(y1,y2,y3);
    int zh3 = zh(z1,z2,z3);
    Student students[3] = 
    {
    	{"小明",zh1},
    	{"小强",zh2},
    	{"小林",zh3}
	};
	StudentsSort(students); /*对students中的3个学生的成绩进行排序*/
	printf("%s > %s > %s", students[0].name, students[1].name, students[2].name);
	return 0;
}