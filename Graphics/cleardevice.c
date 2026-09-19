#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "Clear Screen");

    setcolor(RED);
    circle(300, 250, 100);

    getch();

    cleardevice();

    setcolor(BLUE);
    rectangle(100, 100, 400, 300);

    getch();
    closegraph();

    return 0;
}