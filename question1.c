#include<stdio.h>
int countlength(char []);
int countlength(char str[])
{
   int count;
   for(count=0;str[count]!='\0';count++);
   
    return count; 
}
int main()
{ 
  char str[20];
  printf("enter the string: ");
  gets(str);
 
  printf("string length is: %d ",countlength(str));
  return 0;
}