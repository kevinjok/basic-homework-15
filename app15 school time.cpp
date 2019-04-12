#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int hour,min;
	printf("請輸入時間:\n");
	scanf("%d:%d",&hour,&min);
	 if((hour==7 && min>=30)||(hour>=8 && hour<=16))
	{
		printf("現在是上課時間");
	}
	else
	{
		printf("現在是下課時間");
	}
}

