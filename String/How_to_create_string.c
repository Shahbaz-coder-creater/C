#include <stdio.h>
/*🔹 Method 1: printf() using %s (MOST COMMON)
🧠 Logic
%s bolta hai: jab tak \0 mile, print karte jao
String automatically print ho jati hai
*/
int main(){
//   char name[]= "Shahbaz Ali";
//   printf("%s",name);



  /*🔹 Method 2: puts() (Very easy 😌)

  🧠 Logic
puts() sirf string print karta hai
Automatically new line add karta hai
👉 puts() = string + \n
  
  */
//  char msg[]="Welcome to C progrming";
 
//   puts(msg);
//   puts(msg);
//   puts(msg);
//   printf("%s",msg);
// 🔹 Method 3: Character by Character (LOOP use karke)
 /* 🧠 Main Logic (IMPORTANT)

Loop tab tak chalega jab tak \0 nahi milta

Ye method batata hai ki string actually array hoti hai
*/

// int i=0;
// while(msg[i] != '\0')
// {
//     // printf("%c",msg[i]);
//     // puts(msg);
//     i++;
// }

// 🔹 Method 4: Using putchar() (Low-level way)
// 🧠 Logic

// putchar() ek time pe sirf ek character print karta hai

// Loop lagana padta hai
// for(int i=0; msg[i] != '\0'; i++){

//     putchar (msg[i]);
// }



// 🔹 Method 5: Using Pointer (Thoda smart 😎)


//  char msg[]="Welcome to C progrming";
//  char *p = msg;
//  for(int i=0; p[i] != '\0'; i++){
//     putchar(p[i]);

//  }




    return 0;
}