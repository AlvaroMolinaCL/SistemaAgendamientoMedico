/**
 * @file messages.c
 * @authors Álvaro Molina Jara (amolinaj@ing.ucsc.cl), Juliano Muñoz Sepúlveda (jmunozse@ing.ucsc.cl), Florencia Staforelli Reyes (fstaforelli@ing.ucsc.cl)
 * @brief Sistema de Agenda Médica Electrónica (S. A. M.) | Compilar con gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe
 * @version 1.5
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 **/

#include <stdio.h>
#include <stdlib.h>
#include "samMessages.h"

/* Función que devuelve mensajes de fin de ejecución del programa y de error durante su uso */
int samMessage(int messageType)
{
    if (messageType == 1) // Se devuelve mensaje que indica fin de ejecución del programa
    {
        system("cls"); // Limpieza de pantalla
        printf("\nHa finalizado la ejecuci%cn del programa.\n", 162);
    }
    else if (messageType == 2) // Se devuelve mensaje al digitar una opción errónea dentro de los menús del programa
    {
        printf("\nLa opci%cn ingresada no es correcta.\n", 162);
    }
}