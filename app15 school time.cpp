#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int hour,min;
	printf("�п�J�ɶ�:\n");
	scanf("%d:%d",&hour,&min);
	 if((hour==7 && min>=30)||(hour>=8 && hour<=16))
	{
		printf("�{�b�O�W�Үɶ�");
	}
	else
	{
		printf("�{�b�O�U�Үɶ�");
	}
}

