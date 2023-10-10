/*Rotate Bits. Design a program to rotate bits of a number to the left by k positions.
WTD: You have an integer and a number k. Rotate the bits of the integer to the left by k 
positions using bitwise operations.
(e.g.: I/P: 0b10110011, k=3; O/P: 0b10011101)*/

#include<stdio.h>

int rotate_left_by_k_bits(int num,int k);

int main()
{
    int num,k,res,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of rotations: ");
    scanf("%d",&k);
    res = rotate_left_by_k_bits(num,k);
    printf("After rotation: ");
    for(i=31; i>=0; i--)
    {
        printf("%d",((res>>i)&1));
    }
    return 0;
}

int rotate_left_by_k_bits(int num,int k)
{
    int i;
    for(i=k; i>0; i--)
    {
        num = (num >> 31) | (num << 1);
    }
    return num;
}