#include<stdio.h>
long int A[100000],B[100000],D[100000],N;
long int ssegment(long int ,long int,long int,long int);
int main()
{
	long int T=0,store=-1,flg_zero=1,flg_same=1,gap=1,flg_start=1,flg_end=0,i=0;
	long int max=0,min=99;steps=0,ctr=0,idx=0;
	/*
	Test case :
	1 
	5
	2 1 3 0 3
	2 2 0 1 0
	*/
	//T=1;N=5;
	//D[N]=0;
	scanf("%ld",&T);
	while(T--)
	{
		scanf("%ld",&N);
		for(i=0;i<N;i++)
		{
			scanf("%ld",&A[i]);
		}
		for(i=0;i<N;i++)
		{
			scanf("%ld",&B[i]);
			
			D[i]=(B[i]-A[i]);
			
			if(D[i]<0)
				{D[i]=4+D[i];}
			
			//Case when A & B are same
			if(D[i]!=0)
				flg_zero=-1;
			
			//Case if D[i] are 0s or have same non-zero value
			if(D[i]!=0 && store==-1)
				{store=D[i];}
			else if(store!=D[i] && D[i]!=0)
				{flg_same=-1;}
				
			// Counts no of 0s for gaps
			if(flg_zero==-1 && D[i]==0)
				{gap++;}
				
			// Counts 0s at end
				if(D[i]==0)
					{flg_end++;}
				else
					{flg_end=0;}
			
			//Case where subsegment are not same
			
			if(D[i]!=0)
			{	
				ctr+=1;
				if(D[i]>max)
					{max=D[i];}
				if(D[i]<min)
					{min=D[i];}
				if(ctr==1){	idx=i;	}
				
			}
			else
				{
					//Reset, and count steps
					steps+=ssegment(idx,idx+ctr,max,min);
					max=0;min=99;
					ctr=0;idx=0;
				}
			
				
		}
		steps+=ssegment(idx,idx+ctr,max,min);
		
		if(flg_zero==1)
			{printf("0\n");	}
		else if(flg_same==1)
			{printf("%ld\n",(gap-flg_end)*store);}
		else
		{
			
			//printf("\n Gap : %ld",gap-flg_end);
			printf("%ld\n",steps);
		}
		//Debug for D[i]
		/*for(i=0;i<N;i++)
			{
				printf("%ld ",D[i]);
			}
			printf("\n");
		*/
			
	//RESET value
	store=-1,flg_zero=1,flg_same=1,gap=1,flg_start=1,flg_end=0,steps=0,max=0;
	
	}//End Test
return 0;
}
long int ssegment(long int start,long int end,long int max,long int min)
{
	
	long int step=0,i=0,Z[100000],ctr=0,flg_end=0,flg_zero=1,gap=1,idx=0,offset=0;
	if(max==0 && min==99)
		return 0;
	for(i=start;i<end;i++)
	{
		D[i]=D[i]-min;
		
		if(D[i]==0)
			{Z[ctr]=i;ctr+=1;}
		
		if(D[i]!=0)
				flg_zero=-1;
		
		// Counts no of 0s for gaps
			if(flg_zero==-1 && D[i]==0)
				{gap++;}
				
		
		// Counts 0s at end
			if(D[i]==0)
				{flg_end++;}
			else
				{flg_end=0;}
		
	}
	max=max-min;
	gaps=gaps-flg_end;
	if(gaps==0)
		{step+=min+max;}
	step=step+step*min;
	return step;
}
