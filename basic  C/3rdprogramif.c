#include<stdio.h>
int main(){
    int a=1; int b=0;
    printf("the AND operator is %d\n", a&&b);
    printf("the OR operator is %d\n", a||b);  
    printf("the NOT operator is %d\n",!b);

    if(a&&b){
       printf("both are true");
    }
    if(a){
        if(b){
            printf("both are true");
        }
    }
         
    return 0;
}