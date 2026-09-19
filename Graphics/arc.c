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

    // Example 1 — Half circle
    // arc(300, 250, 0, 180, 100);
//    Example 2 — Quarter arc
   arc(300, 250, 0, 90, 100);

// Center = (300,250)
// Start  = 0°
// End    = 180°
// Radius = 100

// NOTE:
// circle() → पूरा circle
// arc()    → circle ka selected part

    getch();
    closegraph();

    return 0;
}