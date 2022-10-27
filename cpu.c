#include <stdio.h> // printf, fprintf
#include <stdlib.h>  // exit
#include "common.h" // Spin

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];

    while (1) {
        printf("%s\n", str);
        Spin(1); // do nothing for 1 sec
    }
    return 0;
}