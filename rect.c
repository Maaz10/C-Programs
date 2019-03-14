#include<stdio.h>
#include<math.h>

struct vertice
{
 float x1,y1,x2,y2,x3,y3;
};

void input(struct vertice *c)
{
 printf("Enter 1st x and y ");
 scanf("%f %f",&c->x1,&c->y1);
 printf("Enter 2nd x and y ");
 scanf("%f %f",&c->x2,&c->y2);
 printf("Enter 3rd x and y ");
 scanf("%f %f",&c->x3,&c->y3);
}

void area(struct vertice c,float *a)
{
 float l,b;
 l=sqrt(pow((c.x2-c.x1),2)+pow((c.y2-c.y1),2));
 printf("l %f",l);
 b=sqrt(pow((c.x3-c.x1),2)+pow((c.y3-c.y1),2));
 printf("b %f",b);
 *a=l*b;
 printf("a %f",*a);
}

void output(float a)
{
 printf("The area is %f",a);
}

int main()
{
 struct vertice c;
 float a;
 input(&c);
 area(c,&a);
 output(a);
 return 0;
}
