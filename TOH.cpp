//TOH
#include<stdio.h>
void TOH(int,char,char,char);
int main()
{
	int n;
	printf("\n enter no of disks");
	scanf("%d",&n);
	TOH(n,'O','D','I');
	return 0;
	
}
void TOH(int n,char A,char B,char C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("\n move disk %d from %c to %c\n",n,A,B);
		TOH(n-1, C,B,A);
	}
	}

