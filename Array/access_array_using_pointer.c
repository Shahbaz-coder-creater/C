#include <stdio.h>


  // Loop ke through array access using pointer


int main(){
      int arr[] = {6 , 7 , 8 , 9 , 10 , 45 ,32};
      int sizearr=7;
      int *ptr = arr;
      for(int i = 0; i<sizearr;i++){
        printf("acess array using pointer value is = %d .. and index value is = %d\n " , arr[i] , i);
      }


     // normally access array


    // printf(" array %d\n" , (*ptr+0));
    // printf(" array %d\n" , (*ptr+1));
    // printf(" array %d\n" , (*ptr+2));
    // printf(" array %d\n" , (*ptr+3));
    // printf(" array %d\n" , (*ptr+4));
    // printf(" array %d\n" , (*ptr+5));
    // printf(" array %d\n" , (*ptr+6));


    // access array using increment and pointer; 



    // printf("%d\n", *ptr);//6
    // ptr++;
    // printf("%d\n", *ptr); //7
    // ptr++;
    // printf("%d\n", *ptr); //8
    // printf("%d\n", *ptr);//9
    // ptr++;
    // printf("%d\n", *ptr); //10
    // ptr++;
    // printf("%d\n", *ptr); //45
    // ptr++;
    // printf("%d\n", *ptr); //32
    // ptr++;
    return 0;
}