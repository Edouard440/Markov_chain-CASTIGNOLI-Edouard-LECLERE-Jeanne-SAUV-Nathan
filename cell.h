//
// Created by edoua on 20/10/2025.
//
#ifndef CELL_H
#define CELL_H
typedef struct cell {
  int arrival;
  float probability;
  struct cell *next;
} cell;


#endif //CELL_H
