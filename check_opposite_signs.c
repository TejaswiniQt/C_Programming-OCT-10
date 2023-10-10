/* Determine if Two Integers Have Opposite Signs. Write a function to determine if 
two integers have opposite signs using bit manipulation.
WTD: You are given two integers. Use bitwise operations to determine if they have 
opposite signs. Your function should return a boolean value.
(e.g.: I/P: -4, 5; O/P: True) */

#include<stdio.h>

int check_opposite_signs(int a,int b);

int main()
{
    int a,b,res;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res = check_opposite_signs(a,b);
    if(res)
    printf("Ture\n");
    else
    printf("False\n");
    return 0;
}

int check_opposite_signs(int a,int b)
{
    if((a ^ b) < 0)
    return 1;
    else
    return 0;
}