/*求三个数的平均值，这是一个自定义函数*/
#include <stdio.h>
float average(float x,float y,float z)
{
	float aver;        /*定义变量aver*/ 
	aver=(x+y+z)/3;    /*求三个数平均值*/ 
	return(aver);      /*返回aver值,通过average带回调用出*/ 
 } 
int main()
{
	float a,b,c, ave;
	a=6.5;b=4.2;c=25.4;
	ave=average(a,b,c);              /*调用函数average()*/ 
	printf("average=%f",ave );
}
