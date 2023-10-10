/*Mask Certain Bits. Implement a function that masks (sets to zero) all bits except for 
the first n bits of an integer.
WTD: Given an integer, mask (set to zero) all but the first n bits. Use bitwise operations to 
perform this masking and return the resulting integer.
(e.g.: I/P: 0b10101111, n=4; O/P: 0b00001111)*/

#include<stdio.h>

int mask_n_bits(int a,int n);

int main()
{
    int a,n,res;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number of bits to be masked: ");
    scanf("%d",&n);
    res = mask_n_bits(a,n);
    printf("After masking : %d\n",res);
    return 0;
}

int mask_n_bits(int a,int n)
{
    int mask;
    mask = (1 << 8-n) - 1;
    return (mask & a);
}