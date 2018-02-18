/*
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. 
Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

INPUT:
1
2
88
42
99

OUTPUT:
1
2
88
*/

//Code is in C

#include<stdio.h>
int main()
{
   int input;
   
   while(1)
   {
     scanf("%d",&input);
     if(input!=42)
     {
       printf("%d\n",input);
     }
     else{
     break;
     }
   }
    
    return 0;
}
