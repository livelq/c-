/*求三个数的平均值，使用自定义函数*/
#include<stdio.h>
int main()
{
	float x,y,z;
	float average;
	printf("请输入三个数x,y,z:");
	scanf("%f,%f,%f",&x,&y,&z);
	average=(x+y+z)/3;
	printf("average=%f",average);
}
