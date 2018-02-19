/*
Given two strings of equal length, you have to tell whether they both strings are identical.
Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. 
See Sample explanation for more details.

Input :
    First line, contains an intger 'T' denoting no. of test cases.
    Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.

Output:
    For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.

Constraints:
    1<= T <=100
    1<= |S1| = |S2| <= 10^5
    String is made up of lower case letters only.

SAMPLE INPUT:
3
sumit mitsu
ambuj jumba
abhi hibb

SAMPLE OUTPUT:
YES
YES
NO
*/

//Code is written in C.

#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j,k,flag;
    long len1,len2;
    char S1[100000],S2[100000];
    
    scanf("%d",&T);
    
    for(i=0;i<T;i++)
    {
        scanf("%s",&S1);
        scanf("%s",&S2);
        len1=strlen(S1);
        len2=strlen(S2);
        if(len1==len2)
        {
            for(j=0;j<len1;j++)
            {
                for(k=0;k<len1;k++)
                {
                if(S1[j]==S2[k])
                {
                    S2[k]='0';
                    break;
                }
                }
                if(k==len1){
                    flag=0;
                    break;
                } else {
                    flag =1;
                }
            }
        }
        else{
            printf("NO\n");
            continue;
        }
        if(flag)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        flag=1;
    }
    
    
    return 0;
}
