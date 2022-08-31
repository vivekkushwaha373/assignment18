#include<stdio.h>
int main()
{
    char str[20];
    printf("enter a string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
    }
    printf("String in uppercase: %s",str);

    return 0;
}