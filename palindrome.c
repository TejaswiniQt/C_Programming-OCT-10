/*. Check if Binary Representation of a Number is Palindrome. Write a function to 
check if the binary representation of a number is a palindrome.
WTD: For a given integer, determine whether its binary representation reads the same 
forwards and backwards. Use bitwise operations to extract each bit for the check.
(e.g.: I/P: 9 (0b1001); O/P: True)*/

#include<stdio.h>

int palindrome(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(palindrome(num))
    printf("True\n");
    else
    printf("False\n");
    return 0;
}

int palindrome(int num)
{
    int temp,mask=0;
    temp = num;
    while(num)
    {
        mask = mask<<1;
        mask = (num & 1) | mask;
        num = num >> 1;
    }
    if(temp == mask)
    return 1;
    else
    return 0;
}