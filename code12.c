// Use of strchr
//It takes a string and a character as input and finds out the first occurrence of the given character in that string. It will return the pointer to the first occurrence of that character; if found otherwise, return Null.
#include<stdio.h>
#include<string.h>
void check(char s[50],char ch);
void location(char s[50],char ch);
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog.";
    char ch ='z';
    int n;

    printf("Enter the value - ");
    scanf("%d",&n);
    if (n)
    check(s,ch);

    else
    location(s,ch);
    
}
void check(char s[50],char ch)
{
    if(strchr(s,ch))
    printf("\n%c is present in  string 's'\n ",ch);

    else
    printf("\n%c is NOT present in string 's' \n",ch);

}
void location(char s[50],char ch)
{
    char* c;
    c = (char*)strchr(s,ch);
    if(c!=NULL)
    printf("%c is found at location %d",ch,(c-s+1));

    else
    printf("Character not found");
}