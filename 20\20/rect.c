#include<stdio.h>
#include<math.h>

struct vertice
{
 float x1,y1,x2,y2,x3,y3,a,b,c,length,breadth,area;
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

void length_breadth(struct vertice *c)
{
 c->a=sqrt(pow((c->x2-c->x1),2)+pow((c->y2-c->y1),2));
 c->b=sqrt(pow((c->x3-c->x1),2)+pow((c->y3-c->y1),2));
 c->c=sqrt(pow((c->x3-c->x2),2)+pow((c->y3-c->y2),2));
 if(c->a<c->b && c->a<c->c)
 {
  if(c->b<c->c)
  {
   c->length=c->a;
   c->breadth=c->b;
  }
  else
  {
   c->length=c->a;
   c->breadth=c->c;
  }
 }
 else
  if(c->b<c->a && c->b<c->c)
  {
   if(c->a<c->c)
   {
    c->length=c->a;
    c->breadth=c->b;
   }
   else
   {
    c->length=c->c;
    c->breadth=c->b;
   }
  }
  else
  {
   if(c->a<c->b)
   {
    c->length=c->c;
    c->breadth=c->a;
   }
   else
   {
    c->length=c->c;
    c->breadth=c->b;
   }
  }
}

void area(struct vertice *c)
{
 c->area=c->length*c->breadth;
}

void output(struct vertice c)
{
 printf("The area is %f",c.area);
}

int main()
{
 int n,i=0;
 struct vertice c;
 n=instance();
 while(i<n)
 {
  input(&c);
  length_breadth(&c);
  area(&c); 
  output(c);
  i++;
 }
 return 0;
}
