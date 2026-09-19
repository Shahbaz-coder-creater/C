//  #include<stdio.h>

// int main(){
//      int marks[8] = {12, 39, 25, 67 , 60, 89 , 95 , 34};
//      for( int i = 0; i<8; i++){
//         if (marks[i]<35){
//         printf ("%d\n" , i);
//         }
//      }
//     return 0;
// }
#include <stdio.h>

int main() {
    int marks[10];

    // 10 numbers input
    for (int i = 0; i < 10; i++) {
        printf("Enter mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Indexes with marks < 35:\n");

    // Check and print indexes
    for (int i = 0; i < 10; i++) {
        if (marks[i] < 35) {
            printf("%d\n", i);
        }
    }

    return 0;
}
