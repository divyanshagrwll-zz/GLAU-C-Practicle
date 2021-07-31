#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("Choose the option below:\n");
    printf("1: Find length of a string.\n");
    printf("2: Copy of one string into another.\n");
    printf("3: Capitalize all letters of a string.\n");
    printf("4: Reverse of string.\n");
    printf("5: Comparison of two strings.\n");
    printf("Enter Choice (1-5) : ");
    int c;
    scanf("%d",&c);
    printf("Enter string : ");
    char s[100];
    scanf("%s",s);
    switch(c)
    {
        case 1: printf("Lenght of string : %u",strlen(s));
            break;
        case 2: { char nstr[strlen(s)];
            strcpy(nstr,s);
            printf("Copied String : %s",nstr);
        }   
            break;
        case 3: {
            for(int i=0;s[i]!='\0';i++)
                s[i] = toupper(s[i]);
            printf("%s",s);
        } break;
        case 4: {
            char nstr[strlen(s)];
            for(int i=0;s[i]!='\0';i++)
                nstr[i] = s[strlen(s)-i-1];
            printf("Reversed String : %s",nstr);
        } break;
        case 5: {
            char str2[100];
            printf("Enter string 2 : ");
            scanf("%s",str2);
            if(s == str2)
                printf("Strings are same.");
            else
                printf("Strings are not same.");
        } break;
        default : printf("Invalid Input!!");
    }
    return 0;
}