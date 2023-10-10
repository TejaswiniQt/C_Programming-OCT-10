/*. Implement XOR Without Using XOR Operator. Design a program to perform XOR 
operation on two numbers without using the XOR operator.
WTD: You have two integers. Implement the XOR operation without using the XOR 
operator. Use bitwise operations to calculate the result.
(e.g.: I/P: 5, 3; O/P: 6*/
#include <stdio.h>

int ex_or_operation(int a,int b)
{
    int temp=0,mask1,mask2,i;
    for(i=3; i>=0; i--)
    {
        mask1 = ((a >> i) & 1);
        mask2 = ((b >> i) & 1);
        if(mask1 == mask2)
        {
            temp <<= 1;
            temp |= 0;
        }
        else
        {
            temp <<= 1;
            temp |= 1;
        }
    }
    return temp;
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int res = ex_or_operation(a,b);
    printf("Ex-or = %d\n",res);
    return 0;
}
