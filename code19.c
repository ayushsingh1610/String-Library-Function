// Use of strcasecpm
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char s1[50]="tHE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.";
    int res;
    // res=strcasecmp(s1,s);
    res = strncasecmp(s1,s,strlen(s));

    if(res==0)
    printf("Strings are Identical");

    else
    printf("Strings are not Identical");
}
//strcasecmp() - It compares two strings without sensitivity to the case.
//strncasecmp() - It compares n characters of one string to another without sensitivity to the case.