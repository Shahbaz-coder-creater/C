#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "Clear Screen");

    // ellipse(centerX, centerY, startAngle, endAngle, xRadius, yRadius)
    ellipse(300, 250, 180, 0, 150, 80);
    // 300 → Center X 
    // 250 → Center Y 
    // 0   → Starting angle 
    // 360 → Ending angle 
    // 150 → X - radius 
    // 80  → Y - radius

    // note Circle = same X/Y radius

      // Ellipse = different X/Y radius
    getch();
    closegraph();

    return 0;
}