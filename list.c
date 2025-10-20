//
// Created by edoua on 20/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "cell.h"
#include "list.h"

t_list createEmptyList(){
  t_list newList;
  newList.head = NULL;
  return newList;
 }

void displayList(t_list l)
{
    t_cell* curr;
    curr = l.head;
    while (curr != NULL) // an element is pointed to
    {
        printf(format, curr->value);
        curr = curr->next; // move on to the next one
    }
}

AdjacencyList createEmptyAdjacencyList(int size) {
    AdjacencyList adj;
    adj.size = size;

    // Allocate memory for the array of lists
    adj.list = (list *) malloc(size * sizeof(list));
    // Initialize each list as empty
    for (int i = 0; i < size; i++) {
        adj.list[i].head = NULL;
    }

    return adj;
}

void displayAdjacencyList(AdjacencyList adj) {
  for (int i = 0; i < adj.size; i++) {
    t_cell* curr = adj.list[i];
    while (curr != NULL) {
      printf("%f", curr->value);
      curr = curr->next;
    }
  }
}
