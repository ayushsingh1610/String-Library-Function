// USe of memmove.
#include<stdio.h>
#include<string.h>
void main()
{
    char src[50]="The quick brown fox jumps over the lazy dog";
    char dest[50]=" ";
    
    memmove(dest,src,15);
    puts(dest);
    puts(src);
}
//prototype
// memmove(void* dest,const void* src, int n)