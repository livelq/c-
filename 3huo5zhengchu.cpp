#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个数："); 
	scanf("%d",&x);
	if (x%3==0&&x%5==0)
		printf("能被3或5整除\n");
	else
		printf("不能被3或5整除\n");
 } 
