#include<stdio.h>
#include "main.h"
int main() 
{
    printf("%s",MAIN);
    char arr[10];
    scanf("%s",arr);
    int i = 0;
    char ch;
    while((ch = arr[i++])!='\0')
    {
        printf("%c",ch);
    }
    return 0;
}