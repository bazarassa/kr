#include <stdio.h>

int main(int argc, char *argv[]) {
    int fahr = atoi(argv[1]);
    int celsius;

    celsius = 5 * (fahr-32) / 9;
    printf("%d Fahrenheit degrees equals %d Celsius degrees\n", fahr, celsius);
    return 0;
}
