/*����������ƽ��ֵ������һ���Զ��庯��*/
#include <stdio.h>
float average(float x,float y,float z)
{
	float aver;        /*�������aver*/ 
	aver=(x+y+z)/3;    /*��������ƽ��ֵ*/ 
	return(aver);      /*����averֵ,ͨ��average���ص��ó�*/ 
 } 
int main()
{
	float a,b,c, ave;
	a=6.5;b=4.2;c=25.4;
	ave=average(a,b,c);              /*���ú���average()*/ 
	printf("average=%f",ave );
}
