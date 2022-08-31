#include<stdio.h>
#include<string.h>
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
void palindrome(char str[])
{int i;char ptr[20];
for(i=0;str[i]!=0;i++)
{
    ptr[i]=str[i];
}
ptr[i]='\0';
reverse(str);


if(strcmp(ptr,str)==0)
{
    printf("string is palidrome");
}
else
printf("string is not palidrome");
}
int main()
{
   char str[20];
 printf("enter a string: ");
 gets(str);
    
    palindrome(str);
    return 0;
}