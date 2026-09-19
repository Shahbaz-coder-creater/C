// #include <stdio.h>

// int main(){

//  int r ; 
//  printf("enter your radious ");
//  scanf("%d" , &r); 
//  float volume = 4*3.14*r*r;
//  printf("surface area of volume %f" , volume);



//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main() {
    double  r;
    printf("Enter your radius: ");
    scanf("%lf", &r);
    double surface_area;
    surface_area = 4.0 * M_PI * pow(r, 2);
    printf("Surface area of sphere: %f\n", surface_area);

    return 0;
}
