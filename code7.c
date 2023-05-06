// Use of memcmp
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="the quick brown fox ";
    char s2[50]="jumps over the lazy dog.";
    int check;

    check=memcmp(s1,s2,1);
    
    if(check==0)
    printf("Both strings are Identical");

    else if(check>0)
    printf("s1 have greater ASCII value");

    else if(check<0)
    printf("s2 have greater ASCII value");
    
}