//Use of strstr
//This function takes two strings s1 and s2 as an argument and finds the first occurrence of the sub-string s2 in the string s1. The process of matching does not include the terminating null-characters(‘\0’), but function stops there. 
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char s1[50]="fox";
    char *ch;
    ch = strstr(s,s1);
    printf("\n%s is present in the string at location %d points to '%s' ",s1,(ch-s+1),ch);
}