#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    printf("Привет, бауманец!");
    fflush(stdout);
    return 0;
}
