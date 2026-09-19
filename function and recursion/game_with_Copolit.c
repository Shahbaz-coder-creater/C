#include <stdio.h>
#include <stdlib.h>
#include <conio.h>      // For _kbhit() and _getch()
#include <windows.h>    // For Sleep()
#include <time.h>       // For random seed

#define WIDTH 20
#define HEIGHT 10

int playerX = WIDTH / 2;
int itemX = 0, itemY = 0;
int score = 0;
int gameOver = 0;

void draw() {
    system("cls");  // Clear screen

    // Draw top border
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    // Draw game area
    for (int y = 0; y < HEIGHT; y++) {
        printf("#");  // Left border
        for (int x = 0; x < WIDTH; x++) {
            if (y == itemY && x == itemX) printf("*");  // Falling item
            else if (y == HEIGHT - 1 && x == playerX) printf("P");  // Player
            else printf(" ");
        }
        printf("#\n");  // Right border
    }

    // Draw bottom border
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': if (playerX > 0) playerX--; break;
            case 'd': if (playerX < WIDTH - 1) playerX++; break;
            case 'q': gameOver = 1; break;
        }
    }
}

void update() {
    // Move item down
    itemY++;

    // Reset item if it reaches the bottom
    if (itemY > HEIGHT - 1) {
        // Check if caught
        if (itemX == playerX) score++;
        else gameOver = 1;

        itemY = 0;
        itemX = rand() % WIDTH;  // New random position
    }
}

int main() {
    srand(time(0));  // Initialize random seed
    itemX = rand() % WIDTH;  // First item position

    while (!gameOver) {
        draw();
        input();
        update();
        Sleep(400);  // Delay (adjust for difficulty)
    }

    system("cls");
    printf("Game Over! Final Score: %d\n", score);
     return 0;
}