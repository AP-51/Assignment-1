#include<stdio.h>
#include<stdlib.h>
int multiply(int** x,int** y)
{
	int i,j,t,sum;
	int **z;
	z=(int**)malloc(sizeof(int*)*3);
	for(i=0;i<3;i++) z[i]=(int*)malloc(sizeof(int)*3);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			z[i][j]=0;
			for(t=0;t<3;t++) z[i][j]=z[i][j]+(x[i][t]*y[t][j]);
		}
	}
	printf("product matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) printf("%d ",z[i][j]);
		printf("\n");
	}
	free(z);
	return 0;
}
int main()
{
	int **a;
	int **b;
	int i,j;
	a=(int**)malloc(sizeof(int*)*3);
	for(i=0;i<3;i++) a[i]=(int*)malloc(sizeof(int)*3);
	b=(int**)malloc(sizeof(int*)*3);
	for(i=0;i<3;i++) b[i]=(int*)malloc(sizeof(int)*3);
	printf("enter two 3by3 matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) scanf("%d",&a[i][j]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) scanf("%d",&b[i][j]);
	}
	multiply(a,b);
	free(a);
	free(b);
	return 0;
}
		