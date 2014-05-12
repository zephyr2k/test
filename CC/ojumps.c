#include<stdio.h>
int main()
{
	unsigned long long int t=0;
	scanf("%lld",&t);
	if(t%6==0||(t-1)%6==0||(t-3)%6==0)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
