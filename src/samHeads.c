/**
 * @file samHeads.c
 * @authors Álvaro Molina Jara (amolinaj@ing.ucsc.cl), Juliano Muñoz Sepúlveda (jmunozse@ing.ucsc.cl), Florencia Staforelli Reyes (fstaforelli@ing.ucsc.cl)
 * @brief Sistema de Agenda Médica Electrónica (S. A. M.) | Compilar con gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe
 * @version 1.5
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 **/

#include <stdio.h>
#include <stdlib.h>
#include "samStructs.h"

/* Encabezados de los menús y formularios del programa */
int samHead(int headOptions)
{
    if (headOptions == 1) // Encabezado del menú y pantalla principal del programa
    {
        system("cls"); // Limpieza de pantalla
        printf("________________________________________________________________\n\n");
        printf("\tSistema de Agenda M%cdica Electr%cnica (S. A. M.)\n", 130, 162);
        printf("\t\t\tVersi%cn 1.5\n", 162);
        printf("________________________________________________________________\n\n");
        printf("Bienvenido/a al Sistema de Agenda M%cdica Electr%cnica (S. A. M.)\n\n", 130, 162);
        printf("HOSPITAL CL%CNICO CHILENO DE EJEMPLO\n\n", 214);
        printf("A trav%cs de este programa, usted podr%c realizar todas las gestiones relacionadas\n", 130, 160);
        printf("con la administraci%cn de la agenda m%cdica de los profesionales de la salud que\n", 162, 130);
        printf("desempe%can funciones dentro de esta instituci%cn.\n\n", 164, 162);
        printf("Si requiere ayuda o es la primera vez que est%c utilizando este software, puede\n", 160);
        printf("serle %ctil leer el archivo README.md o README.txt que encontrar%c en la carpeta\n", 163, 160);
        printf("que contiene este programa.\n\n");
        printf("Se recomienda omitir el uso de car%ccteres especiales dentro del programa (tildes,\n", 160);
        printf("e%ces, entre otros), ya que %cstos no podr%cn ser le%cdos ni registrados correctamente.\n\n", 164, 130, 160, 161);
        return 1;
    }
    else if (headOptions == 2) // Encabezado del menú de búsqueda del programa
    {
        system("cls"); // Limpieza de pantalla
        printf("____________________________________\n\n");
        printf("\tB%csqueda de horarios\n", 163);
        printf("____________________________________\n\n");
        printf("Aqu%c podr%c realizar la b%csqueda de horas m%cdicas que ya se encuentran registradas\n", 161, 160, 163, 130);
        printf("y agendadas dentro del sistema.\n\n");
        return 2;
    }
    else if (headOptions == 3) // Encabezado del menú de administración de horas médicas del programa
    {
        system("cls"); // Limpieza de pantalla
        printf("__________________________________________\n\n");
        printf("\tAdministraci%cn de horarios\n", 162);
        printf("__________________________________________\n\n");
        printf("Aqu%c podr%c realizsar el ingreso, eliminaci%cn y administraci%cn de horas m%cdicas\n", 161, 160, 162, 162, 130);
        printf("dentro de la plataforma S. A. M.\n\n");
        return 3;
    }
    else if (headOptions == 4) // Encabezado del registro de horas médicas agendadas en el programa
    {
        system("cls"); // Limpieza de pantalla
        printf("___________________________________________________\n\n");
        printf("\tRegistro de horas m%cdicas agendadas\n", 130);
        printf("___________________________________________________\n\n");
        printf("Aqu%c puede visualizar el registro de todas las horas m%cdicas que han sido agendadas\n", 161, 130);
        printf("previamente dentro de la plataforma S. A. M.\n\n");
        return 4;
    }
    else if (headOptions == 5) // Encabezado del formulario para agendar horas médicas
    {
        system("cls"); // Limpieza de pantalla
        printf("______________________________________________\n\n");
        printf("\tAdministraci%cn de horarios\n", 162);
        printf("\t\t%c%c Agendar hora m%cdica\n", 192, 196, 130);
        printf("______________________________________________\n\n");
        return 5;
    }
    else if (headOptions == 6) // Encabezado del formulario para eliminar horas médicas
    {
        system("cls"); // Limpieza de pantalla
        printf("_______________________________________________\n\n");
        printf("\tAdministraci%cn de horarios\n", 162);
        printf("\t\t%c%c Eliminar hora m%cdica\n", 192, 196, 130);
        printf("_______________________________________________\n\n");
        return 6;
    }
    else if (headOptions == 7) // Encabezado del formulario de búsqueda por RUN
    {
        system("cls"); // Limpieza de pantalla
        printf("_________________________________________\n\n");
        printf("\tB%csqueda de horarios\n", 163);
        printf("\t\t%c%c Buscar por RUN\n", 192, 196);
        printf("_________________________________________\n\n");
        return 7;
    }
    else if (headOptions == 8) // Encabezado del formulario de búsqueda por nombre
    {
        system("cls"); // Limpieza de pantalla
        printf("____________________________________________\n\n");
        printf("\tB%csqueda de horarios\n", 163);
        printf("\t\t%c%c Buscar por nombre\n", 192, 196);
        printf("____________________________________________\n\n");
        return 8;
    }
    else if (headOptions == 9) // Encabezado del formulario de búsqueda por apellido paterno
    {
        system("cls"); // Limpieza de pantalla
        printf("______________________________________________________\n\n");
        printf("\tB%csqueda de horarios\n", 163);
        printf("\t\t%c%c Buscar por apellido paterno\n", 192, 196);
        printf("______________________________________________________\n\n");
        return 9;
    }
    else if (headOptions == 10) // Encabezado del formulario de búsqueda por apellido materno
    {
        system("cls"); // Limpieza de pantalla
        printf("______________________________________________________\n\n");
        printf("\tB%csqueda de horarios\n", 163);
        printf("\t\t%c%c Buscar por apellido materno\n", 192, 196);
        printf("______________________________________________________\n\n");
        return 10;
    }
    else if (headOptions == 11) // Encabezado del formulario de búsqueda por fecha
    {
        system("cls"); // Limpieza de pantalla
        printf("___________________________________________\n\n");
        printf("\tB%csqueda de horarios\n", 163);
        printf("\t\t%c%c Buscar por fecha\n", 192, 196);
        printf("___________________________________________\n\n");
        return 11;
    }
}