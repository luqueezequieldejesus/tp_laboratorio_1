#include <stdio.h>
#include <stdlib.h>
/** \brief La funcion toma el valor guardado en A y en B y lo suma devuelve un resultado
 *
 * \param posee un parametro entero A
 * \param posee un parametro entero B
 * \return retorna al resultado de dicha operacion
 *
 */



int sumar (int A, int B)
{



    int respuesta;

    respuesta=A+B;

    return (respuesta);
}
/** \brief La funcion toma el valor guardado en A y en B y los resta devuelve un resultado
 *
 * \param posee un parametro entero A
 * \param posee un parametro entero B
 * \return retorna al resultado de dicha operacion
 *
 */

int restar (int A, int B)
{



    int respuesta;

    respuesta=A - B;

    return (respuesta);

}




/** \brief La funcion toma el valor guardado en A y en B y los divide devuelve un resultado
 *
 * \param posee un parametro entero A
 * \param posee un parametro entero B
 * \return retorna al resultado de dicha operacion
 *
 */



int dividir (int A , int B)
{
    int respuesta;

    respuesta=A / B;

    return (respuesta);


}
/** \brief La funcion toma el valor guardado en A y en B y los multiplica devuelve un resultado
 *
 * \param posee un parametro entero A
 * \param posee un parametro entero B
 * \return retorna al resultado de dicha operacion
 *
 */
int multiplicar (int A, int B)

{
    int respuesta;

    respuesta=A * B;

    return (respuesta);
}

/** \brief La funcion toma el valor guardado en A y resuelve el factorial devuelve un resultado
 *
 * \param posee un parametro entero A
 * \return retorna al resultado de dicha operacion
 *
 */

int factorial(int A, int B)
{
int i;
int respuesta=1;

            for (i=A; i>0 ; i--)
            {


                respuesta=respuesta*i;


            }//Cierre del for

     return (respuesta);
}








