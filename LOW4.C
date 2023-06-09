#include<stdio.h>

int main()
{
    char s[20];
    int i;
    printf("Enter String : ");
    gets(s);
    for(i=0; s[i]!='\0';i++)
        s[i]=toupper(s[i]);
    printf("---------------------------------\n");
    printf("String in Uppercase : %s\n",s);
    for(i=0; s[i]!='\0';i++)
        s[i]=tolower(s[i]);
    printf("\nString in Lowercase : %s",s);
    return 0;
}


