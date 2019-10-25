#include<stdio.h>

int main(){
	int num,sum=0;
	printf("input sum_num");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
		sum+=i;
	printf("sum is %d",sum);
	return 0;
}
void func()
{
	printf("print func");
}
