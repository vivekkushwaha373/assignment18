#include<stdio.h>
void alphanumeric(char str[])
{

    for(int i=0;str[i]!='\0';i++)
    {int count=0,count1=0;
        if(str[i]>=97 && str[i]<=122 || str[i]>=97-32 && str[i]<=122-32)
        {
            count++;
        }
        if(str[i]>=48 && str[i]<=57)
        {
            count1++;
        }
        if(count!=0 && count1!=0)
        {
            printf("number is alphanumeric");
        }
        else
        printf("number is not alphanumeric ");
    }
}
int main()
{
   char str[20];
 printf("enter a string: ");
 scanf("%s",str);

    alphanumeric(str);
    return 0;
}