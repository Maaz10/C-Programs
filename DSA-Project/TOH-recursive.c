#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
#include <limits.h>  

#define MAX 3

int top1=-1,stack1[MAX],top2=-1,stack2[MAX],top3=-1,stack3[MAX];

int isFull(int top,int stack[MAX])  
{  
		return (top==MAX-1);
}

int isEmpty(int top,int stack[MAX])  
{ 
		return (top==-1);
}

void push(int top,int stack[MAX],int val)
{
	if (isEmpty(top,stack))  
        return ;
	top=top+1;
	stack[top]=val;
}

int pop(int top,int stack[MAX])
{
    int z;
	if (isEmpty(top,stack))  
        return INT_MIN; 
	z=stack[top];
	top=top-1;
	return z;
}

void moveDisk(char fromPeg, char toPeg, int disk)  
{  
    printf("Move the disk %d from \'%c\' to \'%c\'\n",  disk, fromPeg, toPeg);  
} 

void moveDisksBetweenTwoPoles(int topx,int stackx[MAX],int topy,int stacky[MAX], char s, char d)// src 1 dest 2 aux 3  
{  
    int pole1TopDisk = pop(topx,stackx);  
    int pole2TopDisk = pop(topy,stacky);  
  
    // When pole 1 is empty  
    if (topx == -1)  
    {  
        push(topx,stackx, pole2TopDisk);  
        moveDisk(d, s, pole2TopDisk);  
    }  
  
    // When pole2 pole is empty  
    else if (top2 == -1)  
    {  
        push(topy,stacky, pole1TopDisk);  
        moveDisk(s, d, pole1TopDisk);  
    }  
  
    // When top disk of pole1 > top disk of pole2  
    else if (pole1TopDisk > pole2TopDisk)  
    {  
        push(topx,stackx, pole1TopDisk);  
        push(topx,stackx, pole2TopDisk);  
        moveDisk(d, s, pole2TopDisk);  
    }  
  
    // When top disk of pole1 < top disk of pole2  
    else
    {  
        push(topy,stacky, pole2TopDisk);  
        push(topy,stacky, pole1TopDisk);  
        moveDisk(s, d, pole1TopDisk);  
    }  
}
 
void tohIterative(int num_of_disks,int top1,int stack1[MAX],int top2,int stack2[MAX],int top3,int stack3[MAX])  
{  
    int i, total_num_of_moves,p=1;  
    char s = 'S', d = 'D', a = 'A';  
  
    //If number of disks is even, then interchange  
    //destination pole and auxiliary pole  
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
  
    //Larger disks will be pushed first  
    for (i = num_of_disks; i >= 1; i--)  
        push(top1,stack1, i);  
  
    for (i = 1; i <= total_num_of_moves; i++)  
    {  
        if (i % 3 == 1)  
        moveDisksBetweenTwoPoles(top1,stack1,top2,stack2, s, d);  
  
        else if (i % 3 == 2)  
        moveDisksBetweenTwoPoles(top1,stack1,top3,stack3, s, a);  
  
        else if (i % 3 == 0)  
        moveDisksBetweenTwoPoles(top3,stack3,top2,stack2, a, d);  
    }  
}  

int main()  
{  
    tohIterative(MAX,top1,stack1,top2,stack2,top3,stack3);  
    return 0;  
}  
