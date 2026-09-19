 #include <stdio.h>
 
 int main(){
       int math;
       int english;
       int hindi;
        
       printf("the value of math");
       scanf("%d\n",&math);

       printf("the value of english");
       scanf("%d\n",&english);

       printf("the value of hindi");
       scanf("%d\n",&english);

       printf("the marks of all subject %d %d %d\n",math,english,hindi);

       if(math<33 || english<33 || hindi<33){

        printf("you are failed due to less marks in induvisual subject");
       }
       else
           

    return 0;
 }