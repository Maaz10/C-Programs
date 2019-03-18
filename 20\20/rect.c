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

void input_points(int n,struct rectangle c[n])
{
 for(int i=0;i<n;i++)
 {
  printf("The instance is %d\n",i+1);
  for(int j=0;j<3;j++)
  {
   printf("Enter no.%d x and y ",j+1);
   scanf("%f %f",&c[i].p[j].x,&c[i].p[j].y);
  }
 }
 printf("\n");
}

void length_breadth(int n,struct rectangle c[n])
{
 float x,y,z;
 for(int i=0;i<n;i++)
 {
  x = sqrt( pow( (c[i].p[1].x - c[i].p[0].x) ,2) + pow( (c[i].p[1].y - c[i].p[0].y) ,2));
  y = sqrt( pow( (c[i].p[2].x - c[i].p[1].x) ,2) + pow( (c[i].p[2].y - c[i].p[1].y) ,2));
  z = sqrt( pow( (c[i].p[2].x - c[i].p[0].x) ,2) + pow( (c[i].p[2].y - c[i].p[0].y) ,2));
  if ( x>y && x>z)
  {
    c[i].length=y;
    c[i].length=z;
  }
  else
  if( y>x && y>z)
  {
    c[i].length = z;
    c[i].breadth = x;
  }
  else
  {
    c[i].length = x;
    c[i].breadth = y;
  }
 }
}

void area(int n,struct rectangle c[n])
{
 for(int i=0;i<n;i++)
 {
  c[i].area = c[i].length * c[i].breadth;
 }
}

void output(int n,struct rectangle c[n])
{
 for(int i=0;i<n;i++)
 { 
  printf("The area of ");
  for(int j=0;j<3;j++)
  {
   printf( "(%.1f,%.1f) ",c[i].p[j].x,c[i].p[j].y);
  }
  printf("is %.1f\n",c[i].area);
 }
}

int main()
{
 int n;
 n=instance();
 struct rectangle c[n];
 input_points(n,c);
 length_breadth(n,c);
 area(n,c); 
 output(n,c);
 return 0;
}
