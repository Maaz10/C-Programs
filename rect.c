#include<stdio.h>
#include<math.h>

struct vertice
{
 float x1,y1,x2,y2,x3,y3,l,b,a;
};

int  instance()
{
 int n;
 printf("Enter the instances ");
 scanf("%d",&n);
 return n;
}

void input(struct vertice *c)
{
 printf("Enter 1st x and y ");
 scanf("%f %f",&c->x1,&c->y1);
 printf("Enter 2nd x and y ");
 scanf("%f %f",&c->x2,&c->y2);
 printf("Enter 3rd x and y ");
 scanf("%f %f",&c->x3,&c->y3);
}

void area(struct vertice *c)
{
 c->l=sqrt(pow((c->x2-c->x1),2)+pow((c->y2-c->y1),2));
 c->b=sqrt(pow((c->x3-c->x1),2)+pow((c->y3-c->y1),2));
 c->a=c->l*c->b;
}

void output(struct vertice c)
{
 printf("The area is %f",c.a);
}

int main()
{
 int n,i=0;
 struct vertice c;
 n=instance();
 while(i<n)
 {
  input(&c);
  area(&c);
  output(c);
  i++;
 }
 return 0;
}
