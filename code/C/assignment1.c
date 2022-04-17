#include<stdio.h>
int interest(int d, int t, int r)
{
	int i,j;
	i=r-(d*t);
	j=(i*12)/t;
	printf("Rate of interest per annum is Rs%d\n",j);
	return 0;
}
int main()
{
	int d,t,r;
	float f;
	printf("Enter deposit amount per month\n");
	scanf("%d",&d);
	printf("Enter time duration in years\n");
	scanf("%f",&f);
	printf("Enter total amount recieved\n");
	scanf("%d",&r);
	f=f*12;
	t=(int)f;
	interest(d,t,r);
	return 0;
}