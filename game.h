#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);

void Displayboard(char board[ROW][COL], int row, int col);

void Playmake(char board[ROW][COL], int row, int col);
void commake(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);