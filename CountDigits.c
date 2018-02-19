/*
You are given a string S. Count the number of occurrences of all the digits in the string S.

Input:
First line contains string S.

Output:
For each digit starting from 0
to 9, print the count of their occurrences in the string S. So, print 10 lines, each line containing 2 space separated integers.
First integer i and second integer count of occurrence of i
See sample output for clarification.

Constraints:
1≤|S|≤100

INPUT:
77150

OUTPUT:
0 1
1 1
2 0
3 0
4 0
5 1
6 0
7 2
8 0
9 0

*/

//Code is written in C.

#include <stdio.h>

int main()
{
int c[10],i,p,len;
char s[100];
gets(s);
len=strlen(s);
for(i=0;i<10;i++)
c[i]=0;
for(i=0;i<len;i++)
{
p=s[i]-48;
c[p]++;
}
for(i=0;i<10;i++)
printf("%d %d\n",i,c[i]);
return 0;
}
