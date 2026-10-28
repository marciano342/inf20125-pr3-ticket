#include <stdio.h>

int main(void)
{
    int entradas_iniciales = 0;
    int entradas_habilitadas = 0;
    int entradas_vendidas = 0;
    int entradas_disponibles = 0;

    if (scanf("%d %d %d",
              &entradas_iniciales,
              &entradas_habilitadas,
              &entradas_vendidas) != 3)
    {
        return 1;
    }

    entradas_disponibles = entradas_iniciales + entradas_habilitadas-entradas_vendidas;

    printf("Entradas disponibles: %d\n", entradas_disponibles);
    return 0;
}
