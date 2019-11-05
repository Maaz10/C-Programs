#include<stdio.h>
#include<stdlib.h>

int f=-1,r=-1,a[4],status[4],n=4;
int g[4][4]={{0,1,0,1},{1,0,1,0},{0,1,0,1},{1,0,1,0}};

void insert(int item)
 {
  if(f==-1)
   {
    f=0;
    r=0;
   }
  else
   {
    r=r+1;
   }
    a[r]=item;
}

void del()
{
  printf("%d ->",a[f]);
  if(f==r)
   {
    f=-1;
    r=-1;
   }
  else
    f=f+1;
}
 
void bfs(int p)
 {
  int i, k;
  insert(p);
  status[p]=2;
  while(f!=-1 && r!=-1)
   {
    status[a[f]]=3;
    k=a[f];
    del();
    for(i=0;i<n;i++)
     {
      if(g[k][i]==1 && status[i]==1)
       {
        insert(i);
        status[i]=2;
      }
    }
  }
}

void bst()
{
 int i;
 for(i=0;i<n;i++)
  {
     status[i]=1;
   }
  for(i=0;i<n;i++)
  {
   if(status[i]==1)
    {
         bfs(i);
    }
 } 
}
///////////////////////////////////////////////////////////////
int top=-1;

void push(int p)
{
 top=top+1;
 a[top]=p;
}

void pop()
{
 printf("%d->",a[top]);
 top=top-1;
}

void dst(int p)
{
 int i,k;
 for(i=0;i<n;i++)
 {
  status[i]=1;
 }
 push(p);
 status[p]=2;
 
 while(top!=-1)
 {
  status[a[top]]=3;
  k=a[top];
  pop();
  for(i=0;i<n;i++)
  {
   if(g[k][i]==1 && status[i]==1)
   {
    push(i);
    status[i]=2;
   }
  }
 }
}

int main()
{
 int z;
 printf("Enter the operation:-\n1->BFS\n2->DFS\n->");
 scanf("%d",&z);
 switch(z)
 {
  case 1:
        bst();
        break;
  case 2:
        dst(0);
        break;
 }
 return 0;
}


    
     
