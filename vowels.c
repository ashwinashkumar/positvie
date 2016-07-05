#include <stdio.h>
int main()
{
    char s;

    printf("Enter a charcter ");
    scanf("%c",&s);
    if(s=='a','e','i','o','u')
        printf("%c is vowels", s);
    else
        printf("%c is consonont", s);

    return 0;
}
