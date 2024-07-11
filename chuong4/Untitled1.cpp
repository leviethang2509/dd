#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

const int WIDTH = 30;
const int HEIGHT = 20;

struct Position {
    int x, y;
};

class Snake {
private:
    Position body[100];
    int length;
    Position food;
    bool gameOver;
    int direction;

public:
    Snake() {
        length = 3;
        body[0].x = WIDTH / 2;
        body[0].y = HEIGHT / 2;
        body[1].x = body[0].x - 1;
        body[1].y = body[0].y;
        body[2].x = body[0].x - 2;
        body[2].y = body[0].y;
        direction = 2;
        gameOver = false;
        spawnFood();
    }

    void spawnFood() {
        food.x = rand() % (WIDTH - 2) + 1;
        food.y = rand() % (HEIGHT - 2) + 1;
    }

    void move() {
        for (int i = length; i > 0; i--) {
            body[i].x = body[i - 1].x;
            body[i].y = body[i - 1].y;
        }

        switch (direction) {
        case 0:
            body[0].y--;
            break;
        case 1:
            body[0].x++;
            break;
        case 2:
            body[0].y++;
            break;
        case 3:
            body[0].x--;
            break;
        }

        if (body[0].x <= 0 || body[0].x >= WIDTH - 1 || body[0].y <= 0 || body[0].y >= HEIGHT - 1) {
            gameOver = true;
        }

        for (int i = 1; i < length; i++) {
            if (body[0].x == body[i].x && body[0].y == body[i].y) {
                gameOver = true;
            }
        }

        if (body[0].x == food.x && body[0].y == food.y) {
            length++;
            spawnFood();
        }
    }

    void draw() {
        system("cls");
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (x == 0 || x == WIDTH - 1 || y == 0 || y == HEIGHT - 1) {
                    cout << "#";
                } else if (x == food.x && y == food.y) {
                    cout << "O";
                } else {
                    bool printed = false;
                    for (int i = 0; i < length; i++) {
                        if (body[i].x == x && body[i].y == y) {
                            cout << "o";
                            printed = true;
                            break;
                        }
                    }
                    if (!printed) {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }

    void getInput() {
        if (_kbhit()) {
            switch (_getch()) {
            case 'w':
                if (direction != 2) {
                    direction = 0;
                }
                break;
            case 'd':
                if (direction != 3) {
                    direction = 1;
                }
                break;
            case 's':
                if (direction != 0) {
                    direction = 2;
                }
                break;
            case 'a':
                if (direction != 1) {
                    direction = 3;
                }
                break;
            }
        }
    }

    bool isGameOver() {
        return gameOver;
    }
};

int main() {
    srand(time(NULL));
    Snake snake;

    while (!snake.isGameOver()) {
        snake.draw();
        snake.getInput();
        snake.move();
        Sleep(100);
    }

    cout << "Game Over!" << endl;
    return 0;
}