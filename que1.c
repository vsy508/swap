#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter any two number\n");
	scanf("%d%d",&a,&b);

	swap(a,b);

	return 0;
}
void swap(int a,int b)
{
	printf("a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d\n",a,b);
}
