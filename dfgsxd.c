#include<stdio.h>

struct sudoku
{
 int a[9][9];
 int x,y,z,l;
 int m[10],n[10],o[10];
};

int instances()
{
 int n;
 printf("Enter the number of instances ");
 scanf("%d",&n);
 return n;
}

void input(int n,struct sudoku s[])
{
 for(int k=0;k<n;k++)
 {
  printf("The No.%d instance\n",k+1);
  printf("Enter the elements\n");
  for(int i=0;i<9;i++)
  {
   for(int j=0;j<9;j++)
   {
    scanf("%d",&s[k].a[i][j]);
   }
  }
 }
}

void rowviable(int n,struct sudoku s[])
{
 for(int l=0;l<n;l++)
 {
  s[l].x=0;
  for(int i=0;i<9;i++)
  {
   for(int j=0;j<9;j++)
   {
    for(int k=0;k<9 && k!=j;k++)
    {
     if(s[l].a[i][k]==0)
          continue;
     else
     {
      if(s[l].a[i][j]==s[l].a[i][k])
      {
       s[l].x=1;
      }
     }
    }
   }
  }
  printf("%d",s[l].x);
 }
}

void columnviable(int n,struct sudoku s[])
{
 for(int l=0;l<n;l++)
 {
  s[l].y=0;
  for(int i=0;i<9;i++)
  {
   for(int j=0;j<9;j++)
   {
    for(int k=0;k<9 && k!=j;k++)
    {
     if(s[l].a[k][i]==0)
          continue;
     else
     {
      if(s[l].a[j][i]==s[l].a[k][i])
      {
       s[l].y=1;
      }
     }
    }
   }
  }
  printf("%d",s[l].y);
 }
} 

void submatviable(int n,struct sudoku s[],int *x,int *y)
{
 *x=0;
 *y=0;
 for(int l=0;l<n;l++)
 {
  int a=0,b=3,c=0,d=3,e=0,f=3,g=0,h=3;
  s[l].z=0;
  while(b<10)
  { 
   for(int i=a;i<b;i++)
   {
    while(f<10)
    {
     for(int j=e;j<f;j++)
     {
      if(s[l].a[i][j]==0)
      {
       continue;
      }
      else
      {
       for(int k=a;k<b;k++)
       {
        for(int m=e;m<f&&m!=j;m++)
        {
         if(s[l].a[i][j]==s[l].a[k][m])
         { 
          s[l].z=1;
          s[l].m[*x]=i;
          s[l].n[*y]=j;
          *x+=1;
          *y+=1;
         }
        }
       }
      }
     }
     e+=3;
     f+=3;
     }
    }
   a+=3;
   b+=3;
  }
  printf("%d %d",*x,*y);
 }
}

void complete(int n,struct sudoku s[])
{
 for(int k=0;k<n;k++)
 {
  s[k].l=0;
  for(int i=0;i<9;i++)
  {
   for(int j=0;j<9;j++)
   {
    if(s[k].a[i][j]==0)
    {
     s[k].l=1;
    }
   }
  }
 }
}

void output(int n,struct sudoku s[],int x,int y)
{
 for(int i=0;i<n;i++)
 {
  printf("For No.%d instance\n",i+1);
  if(s[i].l==1)
  {
   printf("incomplete ");
  }
  else
  {
   printf("complete ");
  }
 
  if(s[i].x==0 && s[i].y==0 && s[i].z==0)
  {
   printf("viable");
  }
  else
  if(s[i].x!=0 || s[i].y!=0 || s[i].z!=0)
  { 
   printf("non viable");
   for(int j=0;j<x;j++)
   {
    printf("%d",s[i].m[j]);
   }  
   for(int k=0;k<y;k++)
   {
    printf("%d",s[i].n[k]);
   }  
  }
 }
}

int main()
{
 int n,x,y;
 n=instances();
 struct sudoku s[n];
 input(n,s);
 rowviable(n,s);
 columnviable(n,s);
 submatviable(n,s,&x,&y);
 complete(n,s);
 output(n,s,x,y);
 return 0;
}
