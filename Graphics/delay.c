#include <graphics.h>
#include <conio.h>

int main()
{
    initwindow(800, 600, "Delay");

circle(100, 250, 30);
delay(3000);

cleardevice();

circle(120, 250, 30);
delay(3000);

cleardevice();
circle(120, 250, 30);
delay(3000);

cleardevice();
circle(120, 250, 30);
delay(3000);

cleardevice();
circle(120, 250, 30);
delay(3000);

cleardevice();
circle(120, 250, 30);
delay(3000);

cleardevice();
circle(120, 250, 30);
delay(3000);

cleardevice();

circle(140, 250, 30);  // 3 seconds wait

    closegraph();

    return 0;
}