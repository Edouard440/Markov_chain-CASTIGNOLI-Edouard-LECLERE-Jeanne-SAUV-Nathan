//
// Created by edoua on 20/10/2025.
//

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

