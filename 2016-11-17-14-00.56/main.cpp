// Programming 1. Sample at 2016-11-17-14-00.56
#include <stdio.h>
#include <stdlib.h>

struct Person {
  char name[100];
  int  age;
  struct Person *next;
};

struct Person *data = NULL;

void generate_data()
{
  data = (struct Person*)malloc(sizeof(struct Person));
  struct Person *ptr = data;
  printf("data = %p\n",data);
  for(int i=0; i<50; i++)
  {
    sprintf(ptr->name,"name-%d",i);
    ptr->age = 10+i;
    if( 49 != i )
    {
      ptr->next = (struct Person*)malloc(sizeof(*ptr));
      ptr = ptr->next;
    } else ptr->next = NULL;
  }
}

void print_data(int age) {
  struct Person *ptr = data;
  while(ptr)
  {
    if(!(ptr->age%age))
      printf("    %s, age %d\n",ptr->name, ptr->age);
    ptr=ptr->next;
  }
}

int main(/*int c, char **v */)
{
  int age =0;
  generate_data(); 
  printf("type age:");
  scanf("%d",&age);
  print_data(age);
  return 0;
}
