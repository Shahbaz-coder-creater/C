#include <stdio.h>
int main(){
     
    int shahbaz_ali;
    printf("Enter the vslue of (1-3):");
    scanf("%d",shahbaz_ali);

    switch (shahbaz_ali)
    {
    case 1: 
       printf("start game\n");
        break;
    case 2:
       printf("load game\n");
     case 3:
       printf("exit game\n");
        break;    
         default:
       printf("Invalid game in the shahbaz_ali");  
    }
    return 0;
}