#include<stdio.h>
void alikechar(char str[])
{  int i,j,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        if(str[i]=='1')
    {
        continue;
    }
        for(j=i+1;str[j]!='\0';j++)
        {   
            if(str[i]==str[j])
            {count++;
            str[j]='1';}
        }
        if(count!=0)
        printf("repeated character is %c\n",str[i]);
    }
}
int main()
{
   char str[20];
   printf("enter a string: ");
   gets(str);
   alikechar(str);
    return 0;
}