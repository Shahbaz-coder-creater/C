#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "Line and Putpixel");

    // line() se ek complete line
    setcolor(RED);
    line(100, 100, 400, 100);

    // putpixel() se individual pixels
    // putpixel(100, 200, GREEN);
    // putpixel(101, 200, GREEN);
    // putpixel(102, 200, GREEN);
    // putpixel(103, 200, GREEN);
    // putpixel(104, 200, GREEN);

    getch();
    closegraph();

    return 0;
}