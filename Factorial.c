/*
You have been given a positive integer N. You need to find and print the Factorial of this number. 
The Factorial of a positive integer N refers to the product of all number in the range from 1 to N

Input Format:
The first and only line of the input contains a single integer N
denoting the number whose factorial you need to find.

Output Format
Output a single line denoting the factorial of the number N

Constraints:
1≤N≤10

Input:
2

Output:
2
*/


#include<stdio.h>
#include<math.h>

unsigned int fact(unsigned int N)
{
    if(N==0)
    {
        return 1;
    }
    else
    {
        return N*fact(N-1);
    }
    
}

int main()
{
    int N;
    scanf("%d",&N);
    fact(N);
    printf("%d",fact(N));

    
    return 0;
}
