/**
 * @file main.c
 * @authors Álvaro Molina Jara (amolinaj@ing.ucsc.cl), Juliano Muñoz Sepúlveda (jmunozse@ing.ucsc.cl), Florencia Staforelli Reyes (fstaforelli@ing.ucsc.cl)
 * @brief Sistema de Agenda Médica Electrónica (S. A. M.) | Compilar con gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe
 * @version 1.5
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 **/

/*******************************************************/
/*                                                     */
/*   Sistema de Agenda Médica Electrónica (S. A. M.)   */
/*                    Versión 1.5                      */
/*                                                     */
/*******************************************************/
/**************************************************************************************************/
/*                                                                                                */
/*                                    * INFORMACIÓN IMPORTANTE *                                  */
/*                                                                                                */
/* -    Si es la primera vez que está utilizando este programa, puede ser recomendable que lea    */
/*      los archivos README.md o README.txt que se se encuentran en la misma carpeta del código.  */
/*                                                                                                */
/* -    Si usted nunca ha compilado el software en este ordenador, debe escribir el comando       */
/*      "gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe"  */
/*      dentro de su terminal. Para lo anterior, debe haber configurado previamente el compilador */
/*      gcc correspondiente al lenguaje de programación C.                                        */
/*                                                                                                */
/* -    Una vez que el programa haya sido compilado, podrá ejecutarlo las veces que quiera desde  */
/*      la terminal usando ".\main", asegurándose de que ésta se encuentre en la ruta donde está  */
/*      el software con los archivos de código fuente y el archivo binario (ejecutable).          */
/*                                                                                                */
/**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "samHeads.h"    // Encabezados de los menús y formularios del programa
#include "samMedical.h"  // Despliegue de listado de médicos con horas para agendar y posterior ingreso a almacén de datos de horas agendadas
#include "samMessages.h" // Mensajes genéricos del software (al salir y en caso de error)
#include "samOptions.h"  // Opciones y despliegues de funcionalidades del programa
#include "samStructs.h"  // Estructuras y enumeradores para los formularios y opciones de los menús del software

/* Función principal donde se ejecuta el programa */
int main(int argc, char const *argv[])
{
    samOption(1); // Opciones del menú principal del programa

    if (principalOptions == BUSCAR) // Formulario de búsqueda de horas médicas
    {
        samOption(2); // Despliegue del formulario de búsqueda de horas médicas
    }
    else if (principalOptions == ADMINISTRAR) // Menú de administración de horas médicas
    {
        samOption(3); // Opciones del menú de administración de horas médicas del programa

        if (adminOptions == ADMIN_AGENDARHORA) // Formulario para agendar horas médicas
        {
            samOption(5); // Despliegue del formulario para agendar horas médicas
        }
        else if (adminOptions == ADMIN_ELIMINARHORA) // Formulario para eliminar horas médicas
        {
            samOption(6); // Despliegue del formulario para eliminar horas médicas
        }
        else if (adminOptions == ADMIN_ATRAS) // Opción para volver al menú principal
        {
            samOption(1); // Despliegue de la opción para volver al menú principal
        }
        else if (adminOptions == ADMIN_SALIR) // Opción para salir del programa
        {
            samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
        }
        else // Cada vez que el usuario ingrese una opción errónea...
        {
            samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
            do             // Se retorna al principio del menú de administración de horas médicas
            {
                samOption(3); // Opciones del menú de administración de horas médicas del programa
            } while (adminOptions == -1);
        }
        return 2;
    }
    else if (principalOptions == REGISTROHORAS) // Tabla con horas médicas agendadas previamente en el sistema
    {
        samOption(4); // Despliegue de tabla con horas médicas agendadas previamente en el sistema
    }

    else if (principalOptions == SALIR) // Opción para salir del programa
    {
        samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
    }
    else // Cada vez que el usuario ingrese una opción errónea...
    {
        do // Se retorna al principio del menú de administración de horas médicas
        {
            samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
            return samOption(1);
        } while (principalOptions == -1);
    }
    return 0;
}