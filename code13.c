// USe of strcspn
//calculates the length of the number of characters before the 1st occurrence of character present in both the string.      This function returns the number of characters before the 1st occurrence of character present in both the string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char s1[50]="f";
    int ch = strcspn(s,s1);

    if(ch)
    printf("\n%s is present in string at location %d\n",s1,ch+1);
}