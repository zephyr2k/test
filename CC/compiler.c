#include<stdio.h>
long long int T=0,ctr=0,len=0,i=0,lc=0;
char expr[1000001];
int main()
{
	
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%s",expr);
		len=strlen(expr);
		if(expr[0]=='>')
		{
			printf("%lld\n",ctr);
		}
		else
		{
			for(i=0;i<len;i++)
			{
				if(expr[i]=='<')
					{ctr++;}
				else if(expr[i]=='>')
					{ctr--;}
				if(ctr==0)
					{lc=i+1;}
			}
		printf("%lld\n",lc);
		}
		ctr=0;
		lc=0;
	}
return 0;
}
