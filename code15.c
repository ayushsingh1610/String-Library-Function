//Use of strrchr
//It takes a string and a character as input and finds out the last occurrence of a given character in that string. It will return the pointer to the last occurrence of that character if found otherwise, return Null.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char *ch;
    ch = strrchr(s,'g');

    if(ch!=NULL)
    printf("Character %c is present at location %d",*ch,(ch-s+1));

    else
    printf("\n%c is NOT found",*ch);
}