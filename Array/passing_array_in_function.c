#include <stdio.h>
// simple example of 1D array
//  void printarr(int *arr , int size)    note arr[] = *arr function me direct array nahi jata balki uska address jata hai yani pointer ke rrop me 
 void printarr(int arr[] , int size){
      arr[0] = 100; //  modify array in function
  for(int i = 0 ; i<size; i++){
    // printf("print arr %d\n" ,*(arr+0));    
    printf("print arr %d\n" ,arr[i]);    
   }
}
int main(){
    int arr[5]={4,5,6,7,8};
    int size = 5;
    
   
   printarr(arr,size);






 
    return 0;

}


