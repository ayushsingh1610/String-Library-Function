//Use of strtok
//The strtok in c is a library function which breaks the given string into a series of tokens using the delimiter passed as a parameter.The return value of this function is a pointer to the first token which is found in the string on breaking it into several tokens. And if there will be no tokens left to retrieve, a null pointer is returned.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="The quick brown fox jumps over the lazy dog ";
    char *ch;
    ch = strtok(s,"a");

    //Print the initial tokenised string
    printf("%s\n",ch);

    // Keep printing the token until token in not NULL
    while (ch!=NULL)
    {

        ch = strtok(NULL,"");              //Tokenize the string

        printf("%s",ch);                    // Prints the next token
    }
}
// "Print the next token" statement may be written before "line18" to avoid printing "line12"