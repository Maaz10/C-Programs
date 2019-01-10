#include<stdio.h>

void input(int *x, int *y, int *z)
{
 printf("Enter 1st number");
 scanf("%d",x);

 printf("Enter 2nd number");
 scanf("%d",y);

 printf("Enter 3rd number");
 scanf("%d",z);
}
int comp(int x, int y, int z)  
{
 if(x<y)
   {
    if(x<z)
       return x;
     else
        return z;
    }
 else
   if(y<z)
    return y;
   else 
     return z;

}
void output(int x, int y,int z,int a)
{
 printf("the smaller among %d and %d and %d is %d",x,y,z,a);
}
int main()
{
 int x,y,z,a;
 input(&x,&y,&z);
 a=comp(x,y,z);
 output(x,y,z,a);
}

