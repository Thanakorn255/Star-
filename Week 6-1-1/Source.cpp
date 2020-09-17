#include<stdio.h>

int main()
{
	int i, j,num;
	printf("Enter number : ");
	scanf_s("%d", &num);
	
	for (i=0;i<=num;i++)
	{
		if (num%2!=0) {
			printf("*");
		}
		else {
			printf("_");
		}
		num -= 1;
	}
}