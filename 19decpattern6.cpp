#include<stdio.h>
#include<conio.h>
int main()
{
	int h,sp,str;
	for(h=1;h<=7;h=h+2)
	{
		for(sp=1;sp<=41-h;sp++)
		{
			printf(" ");
		}
		for(str=1;str<=h;str++)
		{
			printf("%d",str);
		}
		printf("\n");

		
	}
	
	
	
}
