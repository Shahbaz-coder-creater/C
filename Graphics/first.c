#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "My First Graphics Program");

    line(1000, 100, 400, 100);
    // circle(250, 250, 100);
    // rectangle(100, 400, 400, 500);

    getch();
    closegraph(1);

    return 0;
}