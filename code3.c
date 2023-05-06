// Use of strcpy
#include<stdio.h>
#include<string.h>
void main()
{
    char src[50]="The quick brown fox jumps over the lazy dog.";
    char dest[50]=" ";
    strcpy(dest,src);
    puts(dest);
}