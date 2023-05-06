// Use of strcmp
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="The quick brown fox jumps over the lazy dog.";
    char s2[50]="The quick brown fox jumps over the lazy dog.";

    if(strcmp(s1,s2)==0)
    printf("String are Identical");

}