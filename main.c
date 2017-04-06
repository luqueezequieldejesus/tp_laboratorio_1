#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()

{

    int resultado=1;
    int A;
    int B;
    int opcion;
    int i;
    int flag1=0;
    int flag2=0;


    do
    {
        printf("\n         ////////////////////////////////////////////////////////////////////////////////////");
        printf("\n         º                                ::   CALCULADORA ::                               º");
        printf("\n         ////////////////////////////////////////////////////////////////////////////////////");
        printf("\n         º                                                                                  º");



        if(flag1==0)
        {

            printf("\n         º 1- Ingresar 1er operando (A=x)                                               °");
        }
        else
        {
            printf("\n         º 1- Ingresar 1er operando (A=%d)  ", A                                          );
        }

        printf("\n°                                                                                           º");

        if(flag2==0)
        {

            printf("\n         º 2- Ingresar 2do operando (B=y)                                               °");
        }
        else
        {
            printf("\n         º 2- Ingresar 2do operando (B=%d)  ", B                                          );
        }
        printf("\n         º                                                                                  º");
        printf("\n         º 3- Calcular la suma (A+B)             4- Calcular la resta (A-B)                 º");
        printf("\n         º                                                                                  º");
        printf("\n         º 5- Calcular la division (A/B)         6- Calcular la multiplicacion (A*B)        º");
        printf("\n         º                                                                                  º");
        printf("\n         º 7- Calcular el factorial (A!)         8-Calcular todas las operaciones           º");
        printf("\n         º                                                                                  º");
        printf("\n         º                                9- Salir                                          º");
        printf("\n         ////////////////////////////////////////////////////////////////////////////////////");
        printf("\n         ////////////////////////////////////////////////////////////////////////////////////");

        printf("\n Ingrese la opcion deseada :                                                                 ");

        scanf("%d",&opcion);



        switch(opcion)
        {
        case 1://ingresa el operando uno .
            printf("\n Introduzca el primer operando: ");
            scanf("%i",&A);
            flag1=1;
            system("cls");
            break;

        case 2: //ingresar el operando numero dos
            printf("\n Introduzca el segundo operando: ");
            scanf("%i",&B);
            system("cls");
            flag2=1;
            break;

        case 3:// Calcular la suma (A+B)
            system("cls");
            resultado=sumar( A,  B);
            printf("\n\n El resultado de la Suma de A + B es :  %i\n\n",resultado);

            break;

        case 4://4- Calcular la resta (A-B)
            system("cls");
            resultado=restar (A , B);
            printf("\n\n El resultador de la Resta de  A - B es : %i\n\n", resultado);

            break;
        case 5://5- Calcular la division (A/B)

                if(B==0)
                {
                    printf("\n Error el numero no puede ser 0...Introduzca el segundo operando: ");
                    scanf("%i",&B);

                }

            system("cls");
            resultado=dividir(A , B);
            printf("\n\n El resultado de la Divicion de A / B es :  %i\n\n",resultado);
            break;

        case 6://6- Calcular la multiplicacion (A*B)

            system("cls");
            resultado=multiplicar (A , B);
            printf("\n\n El resultado de la Multiplicacion de A * B es :  %i\n\n",resultado);
            break;

        case 7://7- Calcular el factorial (A!)
            system("cls");

            if(flag1==1)

            {
                resultado=factorial(A,B);

            printf("\n\nEl el factorial de A=%d  es : %d\n\n", A,resultado );
            }//Cierre del if

            else{
                if(flag1==0)

                {
                      printf("\n\n ERROR.Introduzca el primer operando: \n\n");
                      scanf("%i",&A);
                }

            }//Cierre del else
        case 8://8-Calcular todas las operaciones

            if(opcion==8)
            {

            system("cls");
            resultado=sumar( A,  B);
            printf("\n El resultado de la Suma de A + B es :  %i\n",resultado);

            resultado=restar (A , B);
            printf(" \n El resultador de la Resta de  A - B es : %i\n", resultado);

            resultado=multiplicar (A , B);
            printf(" \n El resultado de la Multiplicacion de A * B es :  %i\n",resultado);

            resultado=dividir(A , B);
            printf("\n El resultado de la Divicion de A / B es :  %i\n",resultado);

            resultado=factorial(A,B);
            printf("\n El el factorial de A=%d  es : %d\n", A,resultado );
            }


        }//cierre de switch




    }while(opcion!=9);//cierre de while


return 0;
} //cierre del main






