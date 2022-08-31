#include<stdio.h>
#include<string.h>
int compare(char [],char[]);
int compare(char str[],char ptr[])
{int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
       
        if(str[i]!=ptr[i])
        return str[i]-ptr[i];
        else
        count++;
        
    }
    if(strlen(str)==strlen(ptr) && count==strlen(str))
    return 0;
    
}
int main()
{   int val;
    char str[10],ptr[10];
    printf("enter string 1: ");
    gets(str);
    printf("enter string 2: ");
    gets(ptr);
    val=compare(str,ptr);
    if(val==0)
    printf("it returned %d hence: string is same ",val);
    else
    printf("it returned %d hence: string is different",val);

    return 0;
}