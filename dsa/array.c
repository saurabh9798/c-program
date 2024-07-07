#include<stdio.h>

void insert(int a[], int size, int position, int element) {
    int i;
    for ( i = size-1; i >= position-1 ; i--)
    {
        a[i+1] = a[i];
    }
    a[i+1] = element;
    size++;
    printf("all elemet are :");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}

void main() {
    int a[50], size , position ,element,i;
    printf("Enter the number of elements you want in array : ");
    scanf("%d",&size);
    printf(" Enter %d number ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("enter the position you want to insert ");
    scanf("%d ",&position);
    // printf("\n Enter the element :");
    // scanf("%d",&element);
    insert(a,size,position,9); 
}