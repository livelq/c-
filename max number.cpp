#include<stdio.h>
int main()
{
	int x,y,z;
	int m,n;
	printf("请输入三个整数x,y,z:");
	scanf("%d,%d,%d",&x,&y,&z); 
	if (x>y)
		m=x;
	else;
		m=y;
	if (m>z)
		n=m;
	else
		n=z;
		printf("%d\n",n);		
}
