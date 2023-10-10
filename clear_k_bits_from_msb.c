/*Write a function that clears all the bits from the most significant bit through i 
(inclusive) in a given number.
WTD: You have an integer. Clear all the bits from the most significant bit to bit i 
(inclusive). Use bitwise operations to perform this action and return the modified integer.
(e.g. :I/P: 0b11111111, i=3; O/P: 0b00001111)*/

#include<stdio.h>

int clear_k_bits_from_msb(int num,int k);

int main()
{
    int num,k;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter number of bits: ");
    scanf("%d",&k);
    int res = clear_k_bits_from_msb(num,k);
    for(int i=7; i>=0; i--)
    printf("%d",(res>>i)&1);
    return 0;
}

int clear_k_bits_from_msb(int num,int k)
{
    int mask;
    mask = (1 << (7-k)) - 1;
    return (mask & num);
}