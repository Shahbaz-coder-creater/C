#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawBackground()
{
    // =========================
    // Background
    // =========================

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(0, 0, 800, 600);


    // =========================
    // Title
    // =========================

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(250, 30, "RAILWAY CROSSING SIMULATOR");


    // =========================
    // Railway Track
    // =========================

    setcolor(DARKGRAY);

    line(0, 250, 800, 250);
    line(0, 330, 800, 330);


    // Railway Sleepers
    setcolor(BROWN);

    for(int x = 20; x <= 780; x += 40)
    {
        line(x, 240, x, 340);
    }


    // =========================
    // Road
    // =========================

    setcolor(BLACK);

    line(0, 430, 800, 430);
    line(0, 550, 800, 550);


    // Road Center Marking
    setcolor(WHITE);

    for(int x = 20; x <= 760; x += 80)
    {
        line(x, 490, x + 40, 490);
    }


    // =========================
    // Railway Crossing
    // =========================

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(350, 430, 450, 550);

}
void drawSignal(int state)

{
    // Signal Pole
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    bar(600, 180, 615, 430);

    // Signal Box
    bar(570, 120, 645, 300);


    // =====================
    // RED LIGHT
    // =====================

    if(state == 2)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
    }
    else
    {
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
    }

    circle(607, 155, 20);
    floodfill(607, 155, getcolor());


    // =====================
    // YELLOW LIGHT
    // =====================

    if(state == 1)
    {
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
    }
    else
    {
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
    }

    circle(607, 210, 20);
    floodfill(607, 210, getcolor());


    // =====================
    // GREEN LIGHT
    // =====================

    if(state == 0)
    {
        setcolor(GREEN);
        setfillstyle(SOLID_FILL, GREEN);
    }
    else
    {
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
    }

    circle(607, 265, 20);
    floodfill(607, 265, getcolor());
}
void drawBarrier(int angle)
{
    // Barrier Stand
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    bar(455, 360, 475, 430);

    // Barrier pivot
    int pivotX = 465;
    int pivotY = 370;

    // Barrier length
    int length = 115;

    // Angle ko radians me convert
    double rad = angle * 3.14159 / 180.0;

    // New end point calculate
    int endX = pivotX - (int)(length * cos(rad));
    int endY = pivotY + (int)(length * sin(rad));

    // Barrier
    setcolor(RED);
    setlinestyle(SOLID_LINE, 0, 5);

    line(pivotX, pivotY, endX, endY);

    // Pivot
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(pivotX, pivotY, 8);
    floodfill(pivotX, pivotY, BLACK);

    setlinestyle(SOLID_LINE, 0, 1);
}
void drawTrain(int x)
{
    // Train Main Body
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    bar(x, 170, x + 260, 250);

    // Engine Front
    bar(x + 260, 195, x + 330, 250);

    // Sloped Front
    setcolor(RED);
    line(x + 330, 195, x + 350, 220);
    line(x + 350, 220, x + 350, 250);
    line(x + 330, 195, x + 350, 220);

    // Cabin
    setfillstyle(SOLID_FILL, RED);
    bar(x, 125, x + 120, 170);

    // Cabin Roof
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    bar(x - 15, 115, x + 135, 130);

    // Cabin Window
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL, LIGHTCYAN);
    bar(x + 25, 140, x + 80, 165);

    // Engine Window
    bar(x + 170, 185, x + 220, 220);

    // Chimney
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    bar(x + 230, 120, x + 255, 170);
    bar(x + 220, 110, x + 265, 125);

    // Headlight
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(x + 325, 215, 10);
    floodfill(x + 325, 215, YELLOW);

    // Wheels
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    circle(x + 60, 255, 28);
    floodfill(x + 60, 255, BLACK);

    circle(x + 200, 255, 28);
    floodfill(x + 200, 255, BLACK);

    circle(x + 300, 255, 28);
    floodfill(x + 300, 255, BLACK);

    // Wheel Centers
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);

    circle(x + 60, 255, 10);
    floodfill(x + 60, 255, LIGHTGRAY);

    circle(x + 200, 255, 10);
    floodfill(x + 200, 255, LIGHTGRAY);

    circle(x + 300, 255, 10);
    floodfill(x + 300, 255, LIGHTGRAY);

    // Connecting Rod
    setcolor(LIGHTGRAY);
    line(x + 60, 255, x + 200, 255);
    line(x + 200, 255, x + 300, 255);
}
void drawCar(int x)
{
    // Car Body
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLUE);
    bar(x, 465, x + 130, 510);

    // Car Top / Roof
    setfillstyle(SOLID_FILL, BLUE);

    line(x + 25, 465, x + 45, 435);
    line(x + 45, 435, x + 95, 435);
    line(x + 95, 435, x + 115, 465);

    // Windows
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL, LIGHTCYAN);

    bar(x + 50, 442, x + 70, 462);
    bar(x + 75, 442, x + 95, 462);

    // Wheels
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    circle(x + 30, 515, 15);
    floodfill(x + 30, 515, BLACK);

    circle(x + 100, 515, 15);
    floodfill(x + 100, 515, BLACK);

    // Wheel Centers
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);

    circle(x + 30, 515, 6);
    floodfill(x + 30, 515, LIGHTGRAY);

    circle(x + 100, 515, 6);
    floodfill(x + 100, 515, LIGHTGRAY);
}
int main()
{
    initwindow(800, 600, "Railway Crossing Simulator");

    int trainX = -350;
    int signalState = 0;
    int barrierAngle = 0;
    int carX = 50;
    int trainPassed = 0;

   while(1)
{
    cleardevice();

    drawBackground();

  // Train ka front
int trainFront = trainX + 350;

// Signal and barrier control
if(trainFront < 300){
    signalState = 0;       // GREEN
    barrierAngle = 0;      // UP
}
else if(trainFront < 450){
    signalState = 1;       // YELLOW
    barrierAngle = 0;      // UP
}
else if(trainFront < 650){
    signalState = 2;       // RED
    barrierAngle = 90;     // DOWN
}
else{
    signalState = 0;       // GREEN
    barrierAngle = 0;      // UP
}


if(signalState == 0){
    // GREEN → car moves
    carX += 3;
}
else if(signalState == 1){
    // YELLOW → car slow
    carX += 1;
}
else{
    // RED → car stops near crossing
    if(carX < 300){
        carX += 3;
    }
}


    drawSignal(signalState);
    drawBarrier(barrierAngle);
    drawCar(carX);
    drawTrain(trainX);

    trainX += 3;

    delay(50);
    if(trainX > 800){
    trainX = -350;
}
}

    getch();
    closegraph();

    return 0;
}