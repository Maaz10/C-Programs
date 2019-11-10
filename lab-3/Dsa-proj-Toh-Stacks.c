#include <stdio.h>  
#include <stdlib.h>  
#include <limits.h>  

#define MAX 3

void push(int *top,int stack[MAX],int val)
{
    if(*top==MAX-1)
    {
        return ;
     }
	*top=*top+1;
	stack[*top]=val;
}

int pop(int *top,int stack[MAX])
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

void moveBetweenPoles(int *topx,int stackx[MAX],int *topy,int stacky[MAX], char s, char d)// src 1 dest 2 aux 3  
{  
    int pole1TopDisk = pop(topx,stackx);  
    int pole2TopDisk = pop(topy,stacky);  
  
    if (pole1TopDisk == -1)  
    {  
        push(topx,stackx, pole2TopDisk);  
        moveDisk(d, s, pole2TopDisk);  
    }  
  
    else if (pole2TopDisk == -1)  
    {  
        push(topy,stacky, pole1TopDisk);  
        moveDisk(s, d, pole1TopDisk);  
    }  
  
    else if (pole1TopDisk > pole2TopDisk)  
    {  
        push(topx,stackx, pole1TopDisk);  
        push(topx,stackx, pole2TopDisk);  
        moveDisk(d, s, pole2TopDisk);  
    }  
  
    else
    {  
        push(topy,stacky, pole2TopDisk);  
        push(topy,stacky, pole1TopDisk);  
        moveDisk(s, d, pole1TopDisk);  
    }  
}
 
void Toh(int num_of_disks,int top1,int stack1[MAX],int top2,int stack2[MAX],int top3,int stack3[MAX])  
{  
    int i, total_num_of_moves,p=1;  
    char s = 'S', d = 'D', a = 'A';  
  
    if (num_of_disks % 2 == 0)  
    {  
        char temp = d;  
        d = a;  
        a = temp;  
    }  
    for(int i=0;i<num_of_disks;i++)
    {
     p=p*2;
    }
    total_num_of_moves = p - 1;  
  
    for (i = num_of_disks; i >= 1; i--)  
        push(&top1,stack1, i);  
  
    for (i = 1; i <= total_num_of_moves; i++)  
    {  
        if (i % 3 == 1)  
        moveBetweenPoles(&top1,stack1,&top2,stack2, s, d);  
  
        else if (i % 3 == 2)  
        moveBetweenPoles(&top1,stack1,&top3,stack3, s, a);  
  
        else if (i % 3 == 0)  
        moveBetweenPoles(&top3,stack3,&top2,stack2, a, d);  
    }  
}  

int main()  
{  
    int top1=-1,stack1[MAX],top2=-1,stack2[MAX],top3=-1,stack3[MAX];
    Toh(MAX,top1,stack1,top2,stack2,top3,stack3);  
    return 0;  
}  
