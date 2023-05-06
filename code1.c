// Use of memcpy.
#include<stdio.h>
#include<string.h>
void main()
{
    char src[50]="The quick brown fox jumps over the lazy dog.";  //Source string
    char dest[50]=" ";      //Destination string
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    memcpy(dest,src,n);
    printf("%s",dest);
    printf("\n%s",src);
}   
// prototpe-
// void* memcpy(void* dest, void* src, int n)