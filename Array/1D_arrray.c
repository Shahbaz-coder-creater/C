// #include <stdio.h>
// 1D ARRAY (One-Dimensional) = Memory concept = [1D → continuous memory] AND [1D array uses one index] only one raw
// int main(){
//     int arr[5]={56 ,67, 7,65,567};
//     for(int i = 0 ; i<5;i++){
//         printf("PRINT 1D ARRAY %d\n", arr[i]);
//     }

//     return 0;
// }


// using function print 1D Array
#include <stdio.h>
 int P1DARR(int arr[] , int size){
    for (int i = 0; i <size ; i++){
        printf("print 1D array %d\n" , arr[i]);
    }   
 }
    
int main(){
    int P1DARRR[] = {3,4,6,7,8,92,4};
    int size = 7;
    P1DARR(P1DARRR,size);
    return 0;
}