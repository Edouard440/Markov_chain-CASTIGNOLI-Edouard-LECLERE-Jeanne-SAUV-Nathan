//
// Created by edoua on 20/10/2025.
#include <stdio.h>
#include <stdlib.h>
#include "cell.h"
#include "list.h"


cell *createCell(int arrival, float probability) {
  cell *newCell = malloc(sizeof(cell));
  newCell->arrival = arrival;
  newCell->probability = probability;
  newCell->next = NULL;
  return newCell;
}

void addCellToList(list *l, int arrival, float probability) {
  cell *newCell = createCell(arrival, probability);
  newCell->next = l->head;
  l->head = newCell;
}

