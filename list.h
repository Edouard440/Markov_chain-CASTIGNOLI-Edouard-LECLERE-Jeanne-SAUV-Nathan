#include "cell.h"

#ifndef LIST_H
#define LIST_H
typedef struct list {
  cell *head;
}list;

typedef struct AdjacencyList{
  int size;
  list *list;
}AdjacencyList;
#endif //LIST_H
