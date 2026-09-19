// drawpoly(number_of_points, points);
// arc() ka use circle/ellipse ka sirf ek part draw karne ke liye hota hai.
// arc(x, y, start_angle, end_angle, radius);
// x, y        → Center point
// start_angle → Kahan se arc start hoga
// end_angle   → Kahan tak arc jayega
// radius      → Circle ka radius

#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "arc");
int points[] = {
    100,100,
    300,100,
    350,250,
    200,350,
    50,250,
    100,100
};
setcolor(RED);
drawpoly(6, points);

    getch();
    closegraph();

    return 0;
}