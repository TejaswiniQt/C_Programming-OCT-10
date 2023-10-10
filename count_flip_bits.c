/* Count Number of Flips to Convert A to B. Implement a function that counts the 
number of flips required to convert integer A to integer B .
WTD: You are given two integers A and B. Determine the number of bits you need to flip 
to convert A into B using bitwise operations.
(e.g.: I/P: A=29 (0b11101), B=15 (0b01111); O/P: 2)*/

#include<stdio.h>

int count_flips(int a,int b);

int main()
{
    int a,b,count;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    count = count_flips(a,b);
    printf("Count = %d\n",count);
    return 0;
}

int count_flips(int a,int b)
{
    int i,ex_or,mask,count=0;
    ex_or = a ^ b;
    for(i=7; i>=0; i--)
    {
        mask = (ex_or >> i) & 1;
        if(mask)
        count++;
    }
    return count;
}