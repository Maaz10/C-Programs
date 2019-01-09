#include<stdio.h>
#include<math.h>
struct input
{
	int  x,y;
}h;
double input() 
{                  
	
	printf("enter 1st number\n");
	scanf("%d",&h.x);
 
	printf("enter 2nd number\n");
	scanf("%d",&h.y);
	return h.x ;
	return h.y;
}
double compute(int x)
{
	
	int o;
	o=h.x+h.y;
	return o;
} 
double output(int o)
{ 
	printf("sum of them is %d \t",o);
	return o;
}
int main(void)
{
	double a=input();
	double b=compute(a);
	output(b);

}


