#include<stdio.h>

void input(char* v,int* t)
{
 printf("Enter the vehicle type: ");
 scanf("%c",v);
 printf("\nEnter the no of hours: ");
 scanf("%d",t);
}

void fare(char v,int t,int* c)
{
 switch(v)
 {
  case 'c':
     if(t<=2)
      {
       *c=t*20;
      }
      else
       *c=40+((t-2)*30);
      break;
  case 'b':
     if(t<=4)
      {
       *c=t*40;
      }
      else
       *c=1600+((t-2)*50);
      break;
  case 't':
       if(t<=3)
      {
       *c=t*30;
      }
      else
       *c=90+((t-2)*40);
      break;
   default:
       *c=0;
  }
}
      
void output(int c)
{
 if(c==0)
 {
  printf("ERROR");
 }
 else
  printf("The fee is %d",c);
}

int main()
{
 int t,c=0;
 char v;
 input(&v,&t);
 fare(v,t,&c);
 output(c);
 return 0;
}      
      
      
      
      
      
      
      
      
      
      
      

 
