//
// Created by edoua on 20/10/2025.
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