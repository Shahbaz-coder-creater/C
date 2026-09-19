#include <stdio.h>

int main()
{

    char string[4];
    // printf(" Enter the your data ");
    // scanf("%s", &string);
    // printf(" Enter the your data %s", string);

    for(int i=0; i<3;i++){
        scanf("%c",string[i]);
        fflush(stdin);
    }
    string[3]='\0';
    printf("%S",string);

    return 0;
}