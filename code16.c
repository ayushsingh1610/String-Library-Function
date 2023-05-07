//Use of strspn
//The strspn() function returns the length of the initial substring of the string pointed to by str1 that is made up of only those character contained in the string pointed to by str2.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char s1[50]="The quick fox";
    int n;
    n = strspn(s,s1);
    printf("\nThe length of substring present in s is - %d\n",n);

}