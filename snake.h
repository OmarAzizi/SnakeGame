#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Graphics
#include <SDL2/SDL.h>

// some macros
#define     WINDOW_WIDTH    1800
#define     WINDOW_HEIGHT   1000

// exit codes
#define     EXIT_SUCCESS    0
#define     EXIT_FALIUER    1

#define     GRID_SIZE       20
#define     GRID_DIM        900

void render_grid(SDL_Renderer*, int, int);

enum { SNAKE_UP, SNAKE_DOWN, SNAKE_RIGHT, SNAKE_LEFT };

typedef struct Snake {
    int x;
    int y;
    int dir;

    struct Snake* next;
} Snake;

typedef struct Snake snake;
void init_snake();
void render_snake(SDL_Renderer*, int, int);
void move_snake();
void increase_snake();

typedef struct Apple {
    int w;
    int h;
    int x;
    int y;
} Apple;

struct Apple apple;

void gen_apple();
void render_apple(SDL_Renderer*, int, int);
void detect_apple();

void reset_snake();
void detect_crash();

#endif
