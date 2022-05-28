// Ascii : 65 -90 are capital ABC's
//          97-122 are smallcase ABC's

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue <= 90 && cValue>=65)
    {
        printf("%d is a Captila Character :", cValue );

    }
    else if (cValue>=97 && cValue<=122)
    {
        printf("%d is Small case character :", cValue);
    }
}


int main(){
    char cValue = '\0';

    printf("Enter Character :");
    scanf("%c", &cValue);
    DisplayConvert(cValue);

    return 0;
}