#include <stdio.h>
// 2D ARRAY = [2D array = table format means Rows × Columns , 2D array uses two indices (row, column) and 2D → row-wise continuous memory]

int main(){
int arr[3][4] ={
               { 2 , 4 , 5 , 6 } , 
               { 3 , 9 , 3 , 8 },
               {5  , 6 , 7 , 8 }
                };
     for(int i = 0 ; i<3 ; i++){
        for(int f = 0; f<4; f++){
            if(arr[i][f]%2==0){
                printf(" It is even number%d\n = " , arr[i][f]);
            }else{
                printf("It is odd number%d\n = " , arr[i][f]);
            }
           
        }
        printf("\n");
     }           
    return 0;
}