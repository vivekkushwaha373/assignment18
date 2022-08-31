#include<stdio.h>
int countwords(char []);
int countwords(char str[])
{int count=0;
    for(int i=0;str[i]!='\0';i++)
{
    if(str[i]==' '&& str[i+1]!=' ')
    {
        count++;
    }
   
}
return count++;
}
int main()
{int count;
   char str[40];
 printf("enter a string: ");
 gets(str);
    
    printf("word count=%d",countwords(str)+1);
    return 0;
}