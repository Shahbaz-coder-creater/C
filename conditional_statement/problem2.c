   #include <stdio.h>

   int main(){
      float n ;
      printf("Enter the number - : ");
      scanf("%f",&n);
      if(n>250000 && n<=500000){
         printf("In your account money %0.f\n",n-n*5/100); 
          printf("your tax is :- %0.f" , n*5/100);
      }
      else if(n>500000 && n<=1000000){
         printf("In your account money %0.f\n",n-n*20/100);
          printf("your tax is :- %0.f" , n*5/100); 
      }
         else if( n>=1000000 ){
         printf("In your account money %0.f\n",n-n*30/100); 
          printf("your tax is :- %0.f" , n*5/100);
      }
       else {
      printf(" you not paid taxes because of your income is less than 2.5 lakh");
    }
      
      return 0;
}