// 24.Write a C Program to Swap Two Numbers using Pointers

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping: %d %d", a, b);
    return 0;
}