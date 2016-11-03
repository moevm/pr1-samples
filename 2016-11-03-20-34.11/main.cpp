// Programming 1. Sample at 2016-11-03-20-34.11
#include <stdio.h>


union DATA
{
  char dim  [2][3];
  char dim1 [3][2];
  char bytes[6];
} data;

int main(/*int c, char **v */)
{
   
   printf("sizeof(dim)=%d\n",(int)sizeof(data.dim));

   for(int i=0; i<2; i++)
    for(int j=0; j<3; j++)
    {
      int value = (i+1)*10 +(j+1);
      data.dim[i][j] = value;
      printf("dim[%d][%d]=%d ",i,j,data.dim[i][j]);
    }

   printf("\n");
   
   for(int i=0;i<6;i++)
    printf("bytes[%d]=%d ",i,data.bytes[i]);

   printf("\n");

  return 0;
}
