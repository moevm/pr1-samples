// Programming 1. Sample at 2016-11-03-20-58.18
#include <stdio.h>
#include <string.h>
  
 struct TEST {

   char name[9];
   int  age;

 } _test;

 union TESTU 
 {
   char name[9];
   //int  age;
   char age;
 } test;

 int main()
 {
   strcpy(test.name, "Vasya");
   test.age = 86;

    int size = (int)sizeof(test);
    printf("size %d\n",size);

    printf("%p %p\n", &test.name, &test.age);

    printf("%s is %d\n",test.name, test.age);

    char *ptr = (char*)&test;

    for(int i=0;i<size;i++)
    {
      printf("[%d,%c,0x%X] ",*ptr,*ptr,*ptr);
      ptr++;
    }

    printf("\nage = %d or 0x%X\n",test.age,test.age);
  }
