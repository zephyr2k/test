#include<stdio.h>
#include<malloc.h>
int main()
{
	long int m,n,p,i,j,k;
	long int **M,**T,*P,TC[100][2],row,col;
	/*
	Test Case 
	*/
	n=1;m=4;p=1;
	TC[0][0]=1;TC[0][1]=1;
	TC[1][0]=1;TC[1][1]=1;
	TC[2][0]=4;TC[2][1]=3;
	
	TC[3][0]=4;TC[3][1]=3;
	TC[4][0]=4;TC[4][1]=4;
	TC[5][0]=4;TC[5][1]=3;
	
	//scanf("%ld %ld %ld",&n,&m,&p);
	
	M=(long int **)malloc(n*sizeof(long int *));
	T=(long int **)malloc(n*sizeof(long int *));
	P=(long int *)malloc(p*sizeof(long int));
	for(i=0;i<n;i++)
	{
		M[i]=(long int *)malloc(m*sizeof(long int *));
		T[i]=(long int *)malloc((m-1)*sizeof(long int *));
		P[i]=0;
		for(j=0;j<m;j++)
		{
			M[i][j]=j+1;
			if(j!=m-1)
				{T[i][j]=1;}
		}
	}
	for(i=0;i<p;i++)
	{
		
		//scanf("%ld %ld",&row,&col);
		
		//Appln on ORG matrix
		//TC[i][0]-->row
		//TC[i][1]-->col
		row=TC[i][0];col=TC[i][1];
		
		
		M[row-1][col-1]+=1;
		
			if(col==1)
			{
				T[row-1][col-1]-=1;
				if(T[row-1][col-1]<0){P[row-1]=-1;}
			}
			else if(col==m)
			{
				T[row-1][col-2]+=1;
			}
			else
			{
				T[row-1][col-2]+=1;
				T[row-1][col-1]-=1;
				if(T[row-1][col-1]<0){P[row-1]=-1;}
			}
		
	}
	/*
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%ld ",M[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
		{
			printf("%ld ",T[i][j]);
		}
		printf("\n");
	}*/
	for(i=0;i<n;i++)
	{
		if(P[i]!=-1)
			printf("%ld\n",(M[i][m-1]-M[i][0]));
		else
			printf("%ld\n",P[i]);
	}
return 0;
}
