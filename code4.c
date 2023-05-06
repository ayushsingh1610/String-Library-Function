// Use of strncpy
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char dest[50]=" ";
    strncpy(dest, s, 15);
    puts(dest);
}