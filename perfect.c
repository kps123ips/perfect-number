#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum==n)
	printf("It is a Perfect Number ");
	else
	printf("It is not a Perfect Number");
	getch();
}
