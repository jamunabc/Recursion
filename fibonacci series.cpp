//fibonacci series
#include<stdio.h>
int fibo(int);
int main()
{
	int i,num;
	printf("\n enter the no of term");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d",fibo(i));
	}
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
	
}
