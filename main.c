/* 
 * File:   main.c
 * Author: rohit tiwari
 *
 * Created on 19 October, 2020, 3:56 PM
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
/*
 * 
 */
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int array[])
{
    int min_index;
    for(int step=0;step<MAX-1;step++)
    {
        min_index=step;
        for(int i=step+1;i<MAX;i++)
        {
            if(array[i]<array[min_index])
                min_index=i;
        }
        swap(&array[min_index],&array[step]);
        
    }
    
}
void display(int array[])
{
    for(int i=0;i<MAX;i++)
    {
        printf("\nThe element %d is %d",i,array[i]);
    }
}
int main()
{
    
    int array[MAX];
    for(int i=0;i<MAX;i++)
    {
        printf("Enter the array element[%d] : ",i);
        scanf("%d",&array[i]);
    }
    selectionSort(array);
    display(array);
    exit(0);
}

