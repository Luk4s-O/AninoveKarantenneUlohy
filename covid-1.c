#include <stdio.h>
main()
{
    int pocetdelitelov = 0;
    int delitel = 1;
    int indexprvocisla = 1;
    printf("1 - 2\n");

    for (int skusanecislo = 3; indexprvocisla <= 999; skusanecislo = skusanecislo + 2)
    {
        for (int delitel = 1; delitel <= skusanecislo; delitel++)
        {
            if (skusanecislo % delitel == 0)
            {
                pocetdelitelov++;
                if (pocetdelitelov > 2)
                {
                    pocetdelitelov = 0;
                    break;
                }
            }
            if (delitel == skusanecislo)
            {
                indexprvocisla++;
                pocetdelitelov = 0;
                printf("%d - %d\n", indexprvocisla, skusanecislo);
                break;
            }
        }
    }
}