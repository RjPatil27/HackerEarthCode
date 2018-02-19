/*
Dhananjay has recently learned about ASCII values.He is very fond of experimenting. With his knowledge of ASCII values and
character he has developed a special word and named it Dhananjay's Magical word.
A word which consist of alphabets whose ASCII values is a prime number is an Dhananjay's Magical word.
An alphabet is Dhananjay's Magical alphabet if its ASCII value is prime.
Dhananjay's nature is to boast about the things he know or have learnt about. 
So just to defame his friends he gives few string to his friends and ask them to convert it to Dhananjay's Magical word. 
None of his friends would like to get insulted. 
Help them to convert the given strings to Dhananjay's Magical Word.

Rules for converting:
1.Each character should be replaced by the nearest Dhananjay's Magical alphabet.
2.If the character is equidistant with 2 Magical alphabets. The one with lower ASCII value will be considered as its replacement.

Input format:
First line of input contains an integer T number of test cases. Each test case contains an integer N (denoting the length of the string) and a string S.

Output Format:
For each test case, print Dhananjay's Magical Word in a new line.

Constraints:
1 <= T <= 100
1 <= |S| <= 500

SAMPLE INPUT:
1
6
AFREEN

SAMPLE OUTPUT:
CGSCCO

*/

//Code is written in C.


 #include <stdio.h>  
 int next(int n)  
 {  
   int i,ans;  
   int d1,d2;  
   int k[12]={67,71,73,79,83,89,97,101,103,107,109,113};  
   if(n<=67)  
   {  
     ans=67;  
   }  
   else if(n>=113)  
   {  
     ans=113;  
   }  
   else  
   {  
     for(i=0;i<12;i++)  
     {  
       if(k[i]>n)  
       {  
         d1=k[i]-n ;  
         d2=n-k[i-1];  
         if(d1<d2)  
         {  
           ans=k[i];  
           break;  
         }  
         else  
         {  
           ans=k[i-1];  
           break;  
         }  
       }  
     }  
   }  
   return ans;  
 }  
 int main()  
 {  
   int t,i,n;  
   int temp,ne;  
   char ch[500];  
   scanf("%d",&t);  
   while(t--)  
   {  
     scanf("%d",&n);  
     scanf("%s",ch);  
     for(i=0;i<n;i++)  
     {  
       temp=ch[i];  
       ne=next(temp);  
       ch[i]=ne;  
     }  
     printf("%s\n",ch);  
   }  
   return 0;  
 } 

