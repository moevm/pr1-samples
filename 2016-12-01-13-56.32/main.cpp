// Programming 1. Sample at 2016-12-01-13-56.32
#include <stdio.h>

struct Person {
  struct Person * next;
  int value;
};


int len(struct Person *head)
{
  int counter = 0;
  while(head->next)
  {
    counter++;
    head=head->next;
  }
  return counter;
}

void print(struct Person *head) {
  int length = len(head);
  printf("{ ");
  head= head->next;
  while(head)
  {
    printf("%d ",head->value);
    head = head->next;
  }
  printf(" }:%d\n",length);
}

struct Person *find_prev(struct Person *a, 
        struct Person *head)
{
  while(head->next !=a)
  {
    head = head->next;
  }
  return head;
}

int compare_and_swap (struct Person *head,
                       struct Person *a, 
                       struct Person *b)
{
  if( a->value > b->value) {
    struct Person *prev =find_prev(a,head);
    prev->next = b;
    a->next = b->next;  
    b->next = a;
    return 1;
  }
  return 0;
}

struct Person* sort(struct Person *head) 
{
  int was_changed = 1;

  while(was_changed)
  {
    struct Person *current = head->next;
    struct Person *next    = current->next;
    was_changed = 0;

    while( next )
    {
      if(compare_and_swap(head,current,next))
      {
        was_changed = 1;
        break;
      }
      current = current->next;
      next = next->next;
    }
  }
}

int main(/*int c, char **v */)
{
  struct Person head;
  struct Person a ={NULL, 1};
  struct Person b ={NULL, -2};
  struct Person c ={NULL, 8};

  head.next = &a;
  a.next = &b;
  b.next = &c;

  print(&head);
  sort(&head);
  print(&head);
  return 0;
}



