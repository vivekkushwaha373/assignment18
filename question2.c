#include<stdio.h>
void reverse(char str[])
{int i,count=0;
char ptr[20];
for(i=0;str[i]!='\0';i++)
{
    ptr[i]=str[i];
}
ptr[i]='\0';
for(int k=i-1;k>=0;k--)
{
    str[count]=ptr[k];
    count++;
}
}
char* display(char str[])
{
    return str;
}
int main()
{
    char str[20];
    printf("enter a string: ");
    gets(str);
    printf("string before reversal: %s\n",display(str));
    reverse(str);
    printf("string after reversal: %s",display(str));
    return 0;

}