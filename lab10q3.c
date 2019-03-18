#include<stdio.h>
int main()
{
    char string[1000];
    int count=0,i=0;
    printf("enter the string:");
    gets(string);

    while(string[i]!='\0')
    {
        if(string[i]=='a'|| string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||
           string[i]=='A' || string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
            {
                    count++;
            }
        i++;
    }
    printf("number of vowels in a string=%s are %d",string,count);



}
