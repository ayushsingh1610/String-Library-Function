// Use of strpbrk
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char s1[50]="ayush";
    char *ch ;
    ch = strpbrk(s,s1);
    
    if(ch!=NULL)
    printf("\n'%c' is present in string at location %d\n",*ch,(ch-s+1));
}
// Check each letter of str1 with the whole str2 string
//This function finds the first character in the string s1 that matches any character specified in s2 (It excludes terminating null-characters).
//It returns a pointer to the character in s1 that matches one of the characters in s2, else returns NULL.