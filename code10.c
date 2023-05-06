// Use of strxfrm
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50] = "The quick brown fox jumps over the lazy dog.";
    char s2[50] = " ";
    int n;
    n = strxfrm(s2, s, 10);
    printf("%d", n);
}