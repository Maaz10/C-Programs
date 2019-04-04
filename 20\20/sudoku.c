#include<stdio.h>

struct sudoku
{
 int a[9][9];
 int x,y,z,l;
};
void input(struct sudoku *s)
{
 printf("Enter the elements\n");
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
   scanf("%d",&s.a[i][j]);
  }
 }
}

void rowviable(struct sudoku *s)
{
 s.x=0;
 for(int i=0;i<9;i++)
 {
  for(int j=0;i<9;i++)
  {
   for(int k=0;k<9 && k!=j;k++)
   {
    if(s.a[i][j]==s.a[i][k])
    {
     s.x=1;
    }
   }
  }
 }
}

void columnviable(struct sudoku *s)
{
 s.y=0;
 for(int i=0;i<9;i++)
 {
  for(int j=0;i<9;i++)
  {
   for(int k=0;k<9 && k!=j;k++)
   {
    if(s.a[j][i]==s.a[j][k])
    {
     s.y=1;
    }
   }
  }
 }
}

void submatviable(struct sudoku *s)
{
 s.z=0;
 int c=3,b=0;
 while(c<9)
 {
 for(int i=b;i<c;i++)
 {
  for(int j=b;i<c;i++)
  {
   for(int k=0;k<3;k++)
   {
    if(s.a[i][j]==s.a[i][k])
    {
     s.z=1;
     }
    }
   }
  }
  b+=3;
  c+=3;
 }
}

void complete(struct sudoku *s)
{
 s.l=0;
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
   if(s.a[i][j]==0)
   {
    s.l=1;
   }
  }
 }
}

void output(struct sudoku s)
{
 if(s.l==1)
 {
  printf("incomplete ");
 }
 else
 {
  printf("complete ");
 }
 
 if(s.x==0 && s.y==0 && s.z==0)
 {
 printf("viable");
 }
 else
 if(s.x!=0 || s.y!=0 || s.z!=0)
 { 
  printf("non viable");
 }
}

int main()
{
 struct sudoku s;
 input(s);
 rowviable(s);
 columnviable(s);
 submatviable(s);
 complete(s);
 output(s);
 return 0;
}






