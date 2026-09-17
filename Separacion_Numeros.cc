#include <iostream>

int Valores[7] = {12, -5, 8, -10, 7, -3, 20};

// declaracion:
int ContarPositivos(int *pValores, int *pPositivos);
int ContarNegativos(int *pValores, int *pNegativos);
int ContarCeros(int *pValores, int *pCeros);

int main()
{

    int positivos = 0;
    int negativos = 0;
    int ceros=0;

    int *pPositivos = &positivos;
    int *pNegativos = &negativos;
    int *pCeros = &ceros;

    int *pValores = Valores;

    for (int i = 0; i < 7; i++)
    {
        std::cout << "el valor de los numeros son: " << *pValores << std::endl;

        ContarPositivos(pValores, pPositivos);
        ContarNegativos(pValores, pNegativos);
        ContarCeros(pValores, pCeros);
        pValores++;
    }

    std::cout << "Los positivos en el conjunto son : " << *pPositivos << std::endl;
    std::cout << "Los negativos en el conjunto son : " << *pNegativos << std::endl;
    std::cout << "Los ceros en el conjunto son : " << *pCeros << std::endl;
}

int ContarPositivos(int *pValores, int *pPositivos)
{

    if (*pValores > 0)
    {
        *pPositivos += 1;
    }

    return *pPositivos;
}
int ContarNegativos(int *pValores, int *pNegativos)
{

    if (*pValores < 0)
    {
        *pNegativos += 1;
    }

    return *pNegativos;
}
int ContarCeros(int *pValores, int *pCeros)
{
    int Copia = abs(*pValores);

    if (Copia==0)
    {
        *pCeros += 1;
    }
    else
    while (Copia!=0)
    {
        if (Copia%10 == 0)
        {
            *pCeros += 1;
        }
        Copia = Copia/10;
    }
    return *pCeros;
}