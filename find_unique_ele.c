/*Find a Unique Number in an Array. Given an array where all numbers appear three 
times except for one, which appears just once. Find the unique number using bitwise 
operations.
WTD: Given an array where each number appears exactly three times except for one 
number, find the unique number that appears just once. Use bitwise operations to find this 
unique number.
(e.g.: I/P: [6,1,3,3,3,6,6]; O/P: 1)*/

#include<stdio.h>

int find_unique_ele(int *arr,int *freq,int size);

int main()
{
    int arr[50],freq[50],size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
        freq[i] = -1;
    }
    int res = find_unique_ele(arr,freq,size);
    printf("Unique number in array: %d\n",res);
    return 0;
}

int find_unique_ele(int *arr,int *freq,int size)
{
    int i,j,count=0;
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(!(arr[i] ^ arr[j]))
            {
                arr[j] = 0;
                count++;
            }
        }
        if(freq[i] == -1)
        {
            freq[i] = count;
        }
    }
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1 && (arr[i] != 0))
        return arr[i];
    }
}

