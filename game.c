#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>


int readDirection() {
    char ch;
    while (!kbhit()){

    }

    ch = _getch();
    if (ch == 'a') {
        return 0;
    } else if (ch == 'w') {
        return 1;
    } else if (ch == 'd') {
        return 2;
    } else if (ch == 's') {
        return 3;
    } else {
        return 5;
    }
}


int walk(int *current_x, int *current_y, int direction) {
    //direction summary -> left: 0 top: 1 right: 2 down: 3

    switch (direction)
    {
    case 0:
        *current_y -= 1;
        break;

    case 1:
        *current_x -= 1;
        break;

    case 2:
        *current_y += 1;
        break;

    case 3:
        *current_x += 1;
        break;
    
    default:
        break;
        return 0;
    }
    return 1;
}


int main() {
    char map[20][20];
    int lost;
    lost = 0;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            map[i][j] = '.';
        }
    }

    int current_X;
    int current_y;

    current_X = 0;
    current_y = 0;
    int key;

    while (1) {
        
        system("cls");
        map[current_X][current_y] = '@';

        system("cls");
 

        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                printf("%c ", map[i][j]);
            }
            printf("\n");
            }

        key = readDirection();

        walk(&current_X, &current_y, key);

        Sleep(16);

        }
 

        
}