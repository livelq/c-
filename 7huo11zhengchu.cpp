#include<stdio.h>
int main ()
{
	int x;
	printf("������һ����:");
	scanf("%d",&x);
	if ((x%7==0||x%11==0)&&x%77!=0) 
		printf("yes\n");
	else
	printf("no");
}

