#include<stdio.h>

struct student
{
 int roll;
 char name[30];
 char dept[4];
 int marks;
 char grade[4];
};

void getn(int* n)
{
 printf("Enter the number of students: ");
 scanf("%d",n);
}

void input(int n,struct student* f)
{
 printf("Enter the roll.no  name  dept  marks  grade ");
 for(int i=0;i<n;i++)
 {
  scanf("%d %s %s %d %s", &f[i].roll, f[i].name, f[i].dept, &f[i].marks, f[i].grade);
 }
}

void rollno(int* r)
{
 printf("Enter the roll number ");
 scanf("%d",r);
}

void compute(int n,struct student* f,int r,int* z)
{
 for(int i=0;i<n;i++)
 {
  if(r==f[i].roll)
  {
   *z=i;
  }
 }
}

void output(struct student* f,int z)
{
 printf("The information is \n");
 printf("%d %s %s %d %s", f[z].roll, f[z].name, f[z].dept, f[z].marks, f[z].grade);
}

int main(void)
{
 int n;
 getn(&n);
 struct student f[n];
 int r,z;
 input(n,f);
 rollno(&r);
 compute(n,f,r,&z);
 output(f,z);
 return 0;
}
