#include<stdio.h>
#include<math.h>

struct point
{
 float x,y;
};

struct rectangle
{
 float length,breadth,area;
 struct point p[3];
};

int  instance()
{
 int n;
 printf("Enter the instances ");
 scanf("%d",&n);
 return n;
}

void input_points(struct rectangle *c)
{
 printf("\nEnter 1st x and y ");
 scanf("%f %f",&c->p[0].x,&c->p[0].y);
 printf("Enter 2nd x and y ");
 scanf("%f %f",&c->p[1].x,&c->p[1].y);
 printf("Enter 3rd x and y ");
 scanf("%f %f",&c->p[2].x,&c->p[2].y);
}

void length_breadth(struct rectangle *c)
{
 float x,y,z;
 x = sqrt( pow( (c->p[1].x - c->p[0].x) ,2) + pow( (c->p[1].y - c->p[0].y) ,2));
 y = sqrt( pow( (c->p[2].x - c->p[1].x) ,2) + pow( (c->p[2].y - c->p[1].y) ,2));
 z = sqrt( pow( (c->p[2].x - c->p[0].x) ,2) + pow( (c->p[2].y - c->p[0].y) ,2));
 
 if ( x>y && x>z)
 {
    c->length=y;
    c->lenght=z;
 }
 else
 if( y>x && y>z)
 {
   c->length = z;
   c->breadth = x;
 }
 else
 {
    c->length = x;
    c->breadth = y;
 }
}

void area(struct rectangle *c)
{
 c->area = c->length * c->breadth;
}

void output(struct rectangle c)
{
 printf("The area is %f",c.area);
}

int main()
{
 int n,i=0;
 struct rectangle c;
 n=instance();
 while(i<n)
 {
  input_points(&c);
  length_breadth(&c);
  area(&c); 
  output(c);
  i++;
 }
 return 0;
}
