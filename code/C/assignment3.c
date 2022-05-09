#include<stdio.h>
#include<stdlib.h>
int main()
{
	float r,l,b;
	float f_area,t_area, p;
	printf("enter radius of circle, length and breadth of rectangle\n");
	scanf("%f",&r);
	scanf("%f",&l);
	scanf("%f",&b);
	f_area=3.14*r*r;
	t_area=l*b;
	p= f_area/t_area;
	printf("Probability of die falling in circle is: %f",p);
	return 0;
}