#include<stdio.h>
#include<math.h>

struct point
{
 float x,y;
};

struct radius
{
 float radius;
};

struct circle
{
 int result;
 struct radius r[2];
 struct point p[2];
};

int  instance()
{
 int n;
 printf("Enter the instances ");
 scanf("%d",&n);
 return n;
}

void input(int n,struct circle c[])
{
 for(int i=0;i<n;i++)
 {
  printf("Instance No.%d\n",i+1);
  for(int j=0;j<2;j++)
  {
   printf("Enter point c%d ",j+1);
   scanf("%f %f",&c[i].p[j].x,&c[i].p[j].y);
  } 
  for(int j=0;j<2;j++)
  {
   printf("Enter radius%d ",j+1);
   scanf("%f",&c[i].r[j].radius); 
  }
 }
}

void distance(int n,struct circle c[])
{
 float x,y;
 for(int i=0;i<2;i++)
  {
   x =c[i].r[0].radius+c[i].r[1].radius;
   y = sqrt( pow( (c[i].p[1].x - c[i].p[0].x) ,2) + pow( (c[i].p[1].y - c[i].p[0].y) ,2));
   if(x>y)
   {
    c[i].result=1;
   }    
  }
}

void output(int n,struct circle c[])
{
 for(int i=0;i<n;i++)
 {
  if(c[i].result==1)
  {
   printf("They intersect\n");
  }
  else
  {
   printf("They don't intersect\n");
  }
 }
}

int main()
{
 int n;
 n=instance();
 struct circle c[n];
 input(n,c);
 distance(n,c);
 output(n,c);
 return 0;
}
