#include <stdio.h>
char strlen(char string[]){
    int i=0;
    while(string[i]!='\0'){
            i++;
    }
    
    int count = i-1;
    return count;
}
int main(){
  char str[]="Shahbaz Ali";
  printf("%d",strlen(str));
    return 0;
}
// #include <stdio.h>
// int strlen(char string[])
// {
//     int i = 0;
//     // char c = string[i];
//     while (string[i] != '\0')
//     {
//         // c = string[i];
//         i++;
//     }
//     int count = i - 1;
//     return count;
// }
// int main()
// {
//     char string[] = "Shahbaz Ali";
//     printf("%d", strlen(string));
//     return 0;
// }
