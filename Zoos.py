'''
Problem
You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. 
The input word is considered similar to word zoo if,
2 * x = y

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format:
First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20.

Eg,
Input - zzzoooooo
Output - Yes
'''

x = 0
y = 0
i = 0
string = input()
 
while i < len(string):
    if string[i] == 'z':
        x+=1
    else:
        y+=1
    i += 1
 
if(2 * x == y):
    print("Yes")
else:
    print("No")




