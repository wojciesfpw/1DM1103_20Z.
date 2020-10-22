#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argv[1] != NULL)
    {
        float a = atof(argv[1]);
        printf("Liczba %f podniesiona do kwadratu wynosi %f", a, a*a);
    } else {
        printf("Nie podano ani jednej liczby");
    }
    
    return 0;
}
