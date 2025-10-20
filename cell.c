//
// Created by edoua on 20/10/2025.
#include <stdio.h>
#include <stdlib.h>
#include "cell.h"
#include "list.h"


t_cell *createCell(int val){
  t_cell *new;
  new = (t_cell *)malloc(sizeof(t_cell));
  new->val = val;
  new->next = NULL;
  return new;
}

void addCell(t_list *ptr_list, int val){
  t_cell *new=createCell(val);
  new->next = ptr_list->head;
  ptr_list->head = new;
  return;
}

