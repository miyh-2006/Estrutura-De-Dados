#include <stdio.h>
#include <stdlib.h>

int main () {
    system ("gcc Exemplo01.c -o Exemplo01.exe");
    system ("gcc Exemplo02.c -o Exemplo01.exe");
    system ("gcc Exemplo03.c -o Exemplo01.exe");
    system ("gcc Exemplo04.c -o Exemplo01.exe");
    system ("gcc Exemplo05.c -o Exemplo01.exe");

    system("Exemplo01.exe");
    system("Exemplo02.exe");
    system("Exemplo03.exe");
    system("Exemplo03.exe");
    system("Exemplo05.exe");
}