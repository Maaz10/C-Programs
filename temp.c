#include<stdio.h>

void main()
{
 int a[9][9],x=0,y=0,z=0,l=0,b=0,c=0;
 printf("Enter the numbers\n");
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 
 for(int i=0;i<9;i++)
 {
  for(int j=0;i<9;i++)
  {
   for(int k=0;k<9 && k!=j;k++)
   {
    if(a[i][j]==a[i][k])
    {
     x=1;
    }
   }
  }
 }
 
 for(int i=0;i<9;i++)
 {
  for(int j=0;i<9;i++)
  {
   for(int k=0;k<9 && k!=j;k++)
   {
    if(a[j][i]==a[j][k])
    {
     y=1;
    }
   }
  }
 }
 
 while(c<0)
 {
 for(int i=b;i<c;i++)
 {
  for(int j=b;i<c;i++)
  {
   for(int k=0;k<3;k++)
   {
    if(a[i][j]==a[i][k])
    {
     z=1;
     }
    }
   }
  }
  b+=3;
  c+=3;
 }
 
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
   if(a[i][j]==0)
   {
    l=1;
   }
  }
 }
 
 if(l==1)
 {
  printf("incomplete ");
 }
 else
 {
  printf("complete ");
 }
 
 if(x==0 && y==0 && z==0)
 {
 printf("viable");
 }
 else
 if(x!=0 || y!=0 || z!=0)
 { 
  printf("non viable");
 }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
