/*Find Parity of a Number. Implement a function to check if the number of 1s in the 
binary representation of a given number is even or odd.
WTD: Given an integer, find the parity of its binary representation. Use bitwise operations 
to count the number of bits set to 1 and determine if it's odd or even.
(e.g.: I/P: 7 (0b0111); O/P: Odd)
*/
#include<stdio.h>

int parity(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(parity(num))
    printf("Odd\n");
    else
    printf("Even\n");
    return 0;
}

int parity(int num)
{
    int i,count=0;
    for(i=31; i>=0; i--)
    {
        if((num >> i)&1)
        count++;
    }
    if(count & 1)
    return 1;
    else
    return 0;
}