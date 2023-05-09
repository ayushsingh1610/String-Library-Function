//Use of memset
//It copies a single character for a specified number of times to an object. 
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";

    memset(s,'Z',10);
    puts(s);
}
