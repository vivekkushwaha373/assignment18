#include<stdio.h>
void reverseword(char str[])
{
char ptr[10][10];int k=0,m=0;
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]!=' ')
        {
        ptr[k][m]=str[i];
        if(str[i+1]=='\0')
        {
        ptr[k][m+1]='\0';
        break;
        }
        m++;
        }
        else
        {
            ptr[k][m]='\0';
            m=0;
            k++;
        }
   
}
 for(int b=k;b>=0;b--)
    {
        printf("%s ",ptr[b]);
    }
}
int main()
{
    char str[50];
    printf("enter a string: ");
    gets(str);
    reverseword(str);
    return 0;
}