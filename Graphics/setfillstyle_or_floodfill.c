#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "Fill Practice");

    // setcolor(WHITE);
    // circle(300, 250, 100);

    // setfillstyle(SOLID_FILL, RED);
    // floodfill(300, 250, WHITE);

    // Rectangle ki boundary
    setcolor(WHITE);
    rectangle(100, 100, 400, 300);

    // Fill ka color
    setfillstyle(SOLID_FILL, RED);

    // floodfill() me coordinate kahi bhi shape ke andar ka le sakte ho:
    // floodfill(200, 200, WHITE);
    // floodfill(150, 150, WHITE);
    // Rectangle ke andar se filling start
    floodfill(200, 200, WHITE);

    getch();
    closegraph();

    return 0;
}