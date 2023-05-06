// Use of strncmp
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="The quick brown fox jumps over the lazy dog.";
    char s2[50]="The quick brown fox jumps over the lazy dog.";

    if(strncmp(s1,s2,10)==0)
    printf("Both are identical");
}