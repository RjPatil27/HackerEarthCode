/*
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l
, r and k.
Output Format
Print the required answer on a single line.

Constraints:
1≤l≤r≤1000
1≤k≤1000

INPUT:
1 10 1
OUTPUT:
10
*/

//Code in C

#include<stdio.h>

int main()
{
    int l,r,k;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&k);
    int count=0;
    for(int i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
     printf("%d\n",count);
    return 0;
}
