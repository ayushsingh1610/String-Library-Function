//Use of strncat
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="The quick brown fox ";
    char s2[50]="jumps over the lazy dog.";
    strncat(s1,s2,22);
    puts(s1);
}