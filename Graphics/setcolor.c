#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "Setcolor Practice");

    setcolor(RED);
    line(100, 100, 400, 100);

    setcolor(GREEN);
    circle(300, 250, 100);

    // setcolor(BLUE);
    // Simple rule:

// setcolor() ka effect tab tak rehta hai jab tak tum koi naya setcolor() nahi dete.

// Isliye jis shape ka color alag chahiye, us shape se just pehle setcolor() likho.
    rectangle(100, 400, 400, 500);

    getch();
    closegraph();

    return 0;
}