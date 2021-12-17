#pragma once

#include <iostream>

using namespace std;


void createMatrix(int ** const arrayName, const int rows, const int cols);

void fillMatrix(int ** const arrayName, const int rows, const int cols);

void showMatrix(int ** const arrayName, const int rows, const int cols);

void copyMatrix(int ** const copyingArray, int ** copiedArray, const int rows, const int cols);

void deleteMatrix(int** arrayName, const int rows);

// Не используется в данной программе
void randomizeArray(string array[], int size);
