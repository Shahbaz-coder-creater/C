#include <graphics.h>
#include <conio.h>

int main()
{   
    // 1. initwindow()
    // Sabse pehle graphics window create karni hoti hai.
    initwindow(800, 600, "Graphics"); // [Iske bina normally drawing ke liye graphics window ready nahi hogi.]
    // 800  → Window ki width
    // 600  → Window ki height
    // "My Graphics" → Window ka title

    // 2. Coordinate Syste

    // line(100, 100, 400, 300);
    // line(100, 100, 400, 100);
    
    // 3.
    // circle(300, 250, 100);
    putpixel(1000,1000,RED);
putpixel(1001,1000,RED);
putpixel(1002,1000,RED);
putpixel(1003,1000,RED);
putpixel(1004,1000,RED);
    getch();

    closegraph();

    return 0;
}