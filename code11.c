// use of memchr
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
    int n=strlen(s);

    if(memchr(s,ch,n))
    printf("\n%c is present in first %d characters in string 's'\n ",ch,n);

    else
    printf("\n%c is NOT present in first %d characters in string 's' \n",ch,n);

}
void location(char s[50],char ch)
{
    char* c;
    c = (char*)memchr(s,ch,strlen(s));
    if(c!=NULL)
    printf("%c is found at location %d",ch,(c-s+1));

    else
    printf("Character not found");
}