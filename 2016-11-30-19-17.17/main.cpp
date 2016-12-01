// Programming 1. Sample at 2016-11-30-19-17.17
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(/*int c, char **v */)
{
   int length;
   scanf("%d\n", &length);

   char** names = (char**)malloc(sizeof(char*)*length);
   char** authors = (char**)malloc(sizeof(char*)*length);
   int* years = (int*)malloc(sizeof(int)*length);

   for (int i=0;i<length;i++)
   {
       char name[80];
       char author[80];

       fgets(name, 80, stdin);
       fgets(author, 80, stdin);
       fscanf(stdin, "%d\n", &years[i]);

       (*strstr(name,"\n"))=0;
       (*strstr(author,"\n"))=0;

       printf("name %s\n",name);
       printf("aut %s\n",author);

       names[i] = (char*)malloc(sizeof(char*) * (strlen(name)+1));
       authors[i] = (char*)malloc(sizeof(char*) * (strlen(author)+1));

       strcpy(name, names[i]);
       strcpy(author, authors[i]);

       printf("name %s\n",names[i]);
       printf("aut %s\n",authors[i]);

   }
   printf("%s", names[0]);

  return 0;
}
