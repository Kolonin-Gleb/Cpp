#pragma once

#include <iostream>

using namespace std;

void create(int** const matrixName, const int rows, const int cols);

void fill(int** const matrixName, const int startNumber, const int firstNumber, const int rows, const int cols);

void show(int** const matrixName, const int rows, const int cols);

void deleteMatrix(int** const matrixName, const int rows);

