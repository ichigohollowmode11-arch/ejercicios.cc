#include <iostream>

int Valores[7] = {12, -5, 8, -10, 7, -3, 20};

//declaracion:
int ContarPositivos(int *pValores, int &positivos);
int ContarNegativos(int *pValores, int &negativos);


int main(){

   int positivos = 0;
   int negativos = 0;
   int ceros = 0;

   int *pValores = Valores;

   for (int i = 0; i < 7; i++)
   {
    std::cout << "el valor de los numeros son: "<<*pValores <<std::endl;
    
    ContarPositivos(pValores,positivos);
    ContarNegativos(pValores,negativos);
    pValores++;
   }

    std::cout << "Los positivos en el conjunto son : "<<positivos<<std::endl;
    std::cout << "Los negativos en el conjunto son : "<<negativos<<std::endl;
   
}

int ContarPositivos(int *pValores, int &positivos){

    if (*pValores>0)
    {
        positivos += 1;
    }
    
    return positivos;
}
int ContarNegativos(int *pValores, int &negativos){

    if (*pValores<0)
    {
        negativos += 1;
    }
    
    return negativos;
}
