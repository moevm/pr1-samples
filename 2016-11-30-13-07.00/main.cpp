// Programming 1. Sample at 2016-11-30-13-07.00
#include <stdio.h>
#include <string.h>


int main(/*int c, char **v */)
{
  
  char str1[BUFSIZ];
  char str2[BUFSIZ];

  int dat;

  fgets(str1,BUFSIZ,stdin); 
  fgets(str2,BUFSIZ,stdin); 
  fscanf(stdin,"%d",&dat);

  (*strstr(str1,"\n"))=0;
  (*strstr(str2,"\n"))=0;

  printf("\n line1=[%s], line2 = [%s], dat=%d\n",str1, str2, dat);


  char *ptr = strtok(str1,":");

  int i =0;
  while(ptr && i++<10)
  {
    printf("%s\n",ptr);
    ptr = strtok(NULL,":");
  }


  return 0;
}
