 #include<stdio.h>

int main(){
     int marks[8] = {12, 35, 100, 67 , 60, 89 , 95 , 34};
     for( int i = 0; i<7; i++){
        if (marks[i]<35){
        printf ("%d\n" , i);
        }
     }
    return 0;
}
