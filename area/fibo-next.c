#include<stdio.h>
void next(int i);

void input(int* n)
{
 printf("Enter the number of terms needed ");
 scanf("%d",n);
}

int nexti(int i)
{
 int x[100];
 x[0]=1;
 x[1]=1;
 x[i] = x[i-1] + x[i-2]; 
 return x[i];
}

void output(int n)
{
 int m;
 printf("The Fibonacci seires is \n 1 1");
 for(int i=2;i<n;i++)
 {
  m=nexti(i);
  printf(" %d",m);
 }
}

int main()
{
	int n;
	input(&n);
	output(n);
	return 0;
}
