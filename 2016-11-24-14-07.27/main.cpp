// Programming 1. Sample at 2016-11-24-14-07.27
#include <stdio.h>

struct Person {
  int a;
};

typedef struct 
{
  int p;
} PersonType;

typedef int Int32;

int main(/*int c, char **v */)
{
  Int32 a;

  PersonType p;

  return p.p;
}
