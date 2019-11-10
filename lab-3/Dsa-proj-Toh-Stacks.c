#include <stdio.h>  
#include <stdlib.h>  
#include <limits.h>  


void push(int n,int *top,int stack[n],int val)
{
    if(*top==n-1)
    {
        return ;
     }
	*top=*top+1;
	stack[*top]=val;
}

int pop(int n,int *top,int stack[n])
{
    int z;
    if(*top==-1)
    {
        return -1;
     } 
	z=stack[*top];
	*top=*top-1;
	return z;
}

void moveDisk(char from, char to, int disk)  
{  
    printf("Move the disk %d from \'%c\' to \'%c\'\n",  disk, from, to);  
} 

void moveBetweenPoles(int n,int *topx,int stackx[n],int *topy,int stacky[n], char s, char d)// src 1 dest 2 aux 3  
{  
    int pole1TopDisk = pop(n,topx,stackx);  
    int pole2TopDisk = pop(n,topy,stacky);  
  
    if (pole1TopDisk == -1)  
    {  
        push(n,topx,stackx, pole2TopDisk);  
        moveDisk(d, s, pole2TopDisk);  
    }  
  
    else if (pole2TopDisk == -1)  
    {  
        push(n,topy,stacky, pole1TopDisk);  
        moveDisk(s, d, pole1TopDisk);  
    }  
  
    else if (pole1TopDisk > pole2TopDisk)  
    {  
        push(n,topx,stackx, pole1TopDisk);  
        push(n,topx,stackx, pole2TopDisk);  
        moveDisk(d, s, pole2TopDisk);  
    }  
  
    else
    {  
        push(n,topy,stacky, pole2TopDisk);  
        push(n,topy,stacky, pole1TopDisk);  
        moveDisk(s, d, pole1TopDisk);  
    }  
}
 
void Toh(int n,int top1,int stack1[n],int top2,int stack2[n],int top3,int stack3[n])  
{  
    int i, total_num_of_moves,p=1;  
    char s = 'S', d = 'D', a = 'A';  
  
    if (n % 2 == 0)  
    {  
        char temp = d;  
        d = a;  
        a = temp;  
    }  
    for(int i=0;i<n;i++)
    {
     p=p*2;
    }
    total_num_of_moves = p - 1;  
  
    for (i = n; i >= 1; i--)  
        push(n,&top1,stack1, i);  
  
    for (i = 1; i <= total_num_of_moves; i++)  
    {  
        if (i % 3 == 1)  
        moveBetweenPoles(n,&top1,stack1,&top2,stack2, s, d);  
  
        else if (i % 3 == 2)  
        moveBetweenPoles(n,&top1,stack1,&top3,stack3, s, a);  
  
        else if (i % 3 == 0)  
        moveBetweenPoles(n,&top3,stack3,&top2,stack2, a, d);  
    }  
}  

int main()  
{  
    int n;
    printf("\nEnter the number of disks: ");
    scanf("%d",&n);
    int top1=-1,stack1[n],top2=-1,stack2[n],top3=-1,stack3[n];
    printf("\nThe Steps For Solving the Puzzle are :\n");
    Toh(n,top1,stack1,top2,stack2,top3,stack3);  
    printf("\n");
    return 0;  
}  
