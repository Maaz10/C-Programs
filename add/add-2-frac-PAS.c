 c-programs/add-2-frac.c #include<stdio.h>
 struct frac
{
 float x,y;                      
};
int input(struct frac* h)
{
 printf("Enter numerator of 1st");
 scanf("%f",&h[0].x);

 printf("Enter denomenator of 1st");
 scanf("%f",&h[0].y);

 printf("Enter numerator of 2nd");
 scanf("%f",&h[1].x);

 printf("Enter denomenator of 2nd");
 scanf("%f",&h[1].y);

 return 0;
}
int compute(struct frac* h)
{
 float k=0,sum=0;
     k=(h[0].y*h[1].y);
    sum=((h[0].x*h[1].y)+(h[0].y*h[1].x))/k;
 return sum;
}
void output(float o)
{
 printf("the sum is %f ",o);
}
int main()
{
 struct frac h[2];
 float c;
 input(h);
 c=compute(h);
 output(c);
 return 0;
}
    
    
