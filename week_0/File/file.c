#include <stdio.h>

int main() {
    FILE *fp = NULL;
    int i;

    fp = fopen("Input.dat", "r");
    fscanf(fp, "%d", &i); // Scan from Input.dat
    fclose(fp);

    fp = fopen("Output.dat", "w");
    fprintf("%d^2 = %d", i, i*i); // Prints to Output.dat
    fclose(fp);

    return 0;
}