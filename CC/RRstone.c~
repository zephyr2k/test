#include<stdio.h>
#include<limits.h>
long long int N=0,K=0,A[100000],i=0;
void pf();
int main()
{
	long long int max1=INT_MIN,max2=INT_MIN;
	scanf("%lld %lld",&N,&K);
	for(;i<N;i++)
	{
		scanf("%lld",&A[i]);
		if(A[i]>max1)
		{max1=A[i];}
	}
	for(i=0;i<N;i++)
	{
		A[i]=max1-A[i];
		if(A[i]>max2)
			{max2=A[i];}
	}
	if(K%2==1)
	{
		pf();
	}
	else
	{
		for(i=0;i<N;i++)
		{
			A[i]=max2-A[i];
		}
		pf();
	}
return 0;
}
void pf()
{
	for(i=0;i<N;i++)
		{
			
			printf("%lld\t",A[i]);
		}
		printf("\n");
}
