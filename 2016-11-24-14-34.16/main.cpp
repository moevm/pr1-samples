// Programming 1. Sample at 2016-11-24-14-34.16
#include <stdio.h>
#include <stdlib.h>

int data[10] = {32387241,2,2,4,5,9,55,3,77,3};

int compare(const void *a, const void *b) {
  char valuea = *((char*)a);
  char valueb = *((char*)b);

//  printf("comparing %d %d\n",valuea,valueb);

  return valuea-valueb;
}

int compare_r(const void *a, const void *b) {
  char valuea = *((char*)a);
  char valueb = *((char*)b);

//  printf("comparing %d %d\n",valuea,valueb);

  return valueb-valuea;
}


void print_data()
{
  char *ptr = (char*)data;
  for(int i=0;i<40;i++)
  {
    printf("%d ",ptr[i]);
  }
  printf("\n");
}

int main(/*int c, char **v */)
{
  print_data();   
  qsort(data,40,sizeof(char),compare);
  print_data();   
  qsort(data,40,sizeof(char),compare_r);
  print_data();   



  return 0;
}
