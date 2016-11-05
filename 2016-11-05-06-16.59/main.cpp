#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Error: file is not opened!\n");
        exit(EXIT_FAILURE);
    }

    int x, step = 0;
    int sum = 0;
    int result = 0;

    while (!feof(fp) && (result = fscanf(fp,"%d",&x)) != EOF) {
        if(result != 1) {
          fprintf(stderr, "Error: incorrect file format!\n");
          exit(EXIT_FAILURE);
        }

        sum += x;
        step += 1;
        printf("%d. x = %5d; sum = %5d\n", step, x, sum);
    }

    fclose(fp);

    return 0;
}
