#include<stdio.h>
int main()
{
	int age;
	int price;
	int ticket;
	printf("请输入年龄和票价:");
	scanf("%d,%d",&age,&price);
	if (age<=12)
		ticket=10;
	else
		if (age>=60)
			ticket=price*0.3;
		else
			if (12<age<60)
				ticket=price*0.5;
			else
				ticket=price;
				printf("%d\n",ticket);
}
