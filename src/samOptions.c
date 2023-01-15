/**
 * @file samOptions.c
 * @authors Álvaro Molina Jara (amolinaj@ing.ucsc.cl), Juliano Muñoz Sepúlveda (jmunozse@ing.ucsc.cl), Florencia Staforelli Reyes (fstaforelli@ing.ucsc.cl)
 * @brief Sistema de Agenda Médica Electrónica (S. A. M.) | Compilar con gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe
 * @version 1.5
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "samHeads.h"
#include "samMedical.h"
#include "samMessages.h"
#include "samOptions.h"
#include "samStructs.h"

/* Función que despliega opciones de los menús junto con los formularios y principales funcionalidades del programa */
int samOption(int programOptions)
{
    if (programOptions == 1) // Opciones del menú principal del programa
    {
        samHead(1); // Encabezado del menú y pantalla principal del programa
        printf("%cQu%c desea hacer ahora? Escriba el n%cmero de la opci%cn correspondiente:\n\n", 168, 130, 163, 162);
        printf("1) Buscar horas m%cdicas.\n", 130);
        printf("2) Administrar horas m%cdicas.\n", 130);
        printf("3) Revisar registro de horas m%cdicas.\n", 130);
        printf("4) Salir del programa.\n\n");
        printf(">> ");
        scanf("%i", &principalOptions);
        return 1;
    }
    else if (programOptions == 2) // Formulario de búsqueda de horas médicas
    {
        char searchTerm[MAX];
        samHead(2); // Encabezado del menú de búsqueda del programa
        printf("%cC%cmo desea realizar la b%csqueda? Escriba el n%cmero de la opci%cn correspondiente:\n\n", 168, 162, 163, 163, 162);
        printf("1) Buscar por RUN.\n");
        printf("2) Buscar por primer nombre.\n");
        printf("3) Buscar por apellido paterno.\n");
        printf("4) Buscar por apellido materno.\n");
        printf("5) Buscar por fecha.\n");
        printf("6) Salir del programa.\n\n");
        printf(">> ");
        scanf("%i", &searchOptions);

        if (searchOptions == 1) // Búsqueda de horas médicas por RUN
        {
            samHead(7); // Encabezado del formulario de búsqueda de horas médicas por RUN
            fflush(stdin);
            printf("\nIngrese un RUN (formato 12345678-9): "); // El usuario ingresa un RUN para realizar la búsqueda
            fgets(searchTerm, MAX, stdin);                     // Se almacena el RUN ingresado por el usuario
            strtok(searchTerm, "\n");                          // Se elimina salto de línea

            FILE *flujoSearchHour = fopen("samHoursLog.txt", "a+"); // Se abre almacén de datos con horas médicas registradas en el sistema

            if (flujoSearchHour == NULL) // Si ocurre un error en la apertura del archivo...
            {
                system("cls");
                perror("Ha ocurrido un error inesperado"); // Se despliega un error junto al motivo (generado por el sistema)
            }
            else
            {
                samHead(7);                    // Encabezado del formulario de búsqueda de horas médicas por RUN
                while (!feof(flujoSearchHour)) // Mientras no sea el final del archivo...
                {
                    fscanf(flujoSearchHour, "%s %s %s %s %s %s %s %s %s %s",
                           &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                           &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                           &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                           &hourForm.medicoAMaterno, &hourForm.especialidad);            // Se escaneará la estructura "hourForm" dentro del almacén de datos
                    if (strstr(searchTerm, hourForm.run) == 0 && !feof(flujoSearchHour)) // Si el RUN ingresado por el usuario coincide con alguno dentro del almacén de datos y no sea el final del archivo
                    {
                        printf("\nSe ha encontrado la siguiente hora m%cdica agendada coincidente con el RUN %s:\n\n", 130, searchTerm); // Se desplegará la información de la(s) hora(s) médica(s) asociada(s) al RUN ingresado
                        printf("- RUN:    \t\t%s\n\n", hourForm.run);
                        printf("- Nombre: \t\t%s %s %s\n\n", hourForm.nombrePila, hourForm.apellidoP, hourForm.apellidoM);
                        printf("- Fecha: \t\t%s\n\n", hourForm.fecha);
                        printf("- Hora: \t\t%s\n\n", hourForm.hora);
                        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
                        printf("- Especialidad: \t%s\n\n", hourForm.especialidad);
                    }
                    else // En caso contrario...
                    {
                        printf("\nNo se han encontrado horas m%cdicas agendadas coincidentes con el RUN %s.\n", 130, searchTerm); // Se entregará un mensaje al usuario de que no se encontraron coincidencias
                    }
                }
                fflush(flujoSearchHour);
                fclose(flujoSearchHour);                                        // Se cierra el almacén de datos
                printf("\n%cDesea realizar una nueva b%cqueda?\n\n", 168, 163); // Se pregunta al usuario si desea realizar una nueva búsqueda
                printf("1) S%c.\n", 161);
                printf("2) No.\n\n");
                printf(">> ");
                scanf("%i", &yesNo);
                if (yesNo == 1) // En caso afirmativo, se retorna al menú de búsqueda de horas médicas
                {
                    return samOption(2);
                }
                else // En caso contrario, se retorna al menú principal del programa
                {
                    return samOption(1);
                }
            }
        }
        else if (searchOptions == 2) // Búsqueda de horas médicas por nombre
        {
            samHead(8); // Encabezado del formulario de búsqueda de horas médicas por nombre
            fflush(stdin);
            printf("\nIngrese un nombre: "); // El usuario ingresa un nombre para realizar la búsqueda
            fgets(searchTerm, MAX, stdin);   // Se almacena el nombre ingresado por el usuario
            strtok(searchTerm, "\n");        // Se elimina salto de línea

            FILE *flujoSearchHour = fopen("samHoursLog.txt", "a+"); // Se abre almacén de datos con horas médicas registradas en el sistema

            if (flujoSearchHour == NULL) // Si ocurre un error en la apertura del archivo...
            {
                system("cls");
                perror("Ha ocurrido un error inesperado"); // Se despliega un error junto al motivo (generado por el sistema)
            }
            else
            {
                samHead(8);                    // Encabezado del formulario de búsqueda de horas médicas por nombre
                while (!feof(flujoSearchHour)) // Mientras no sea el final del archivo...
                {
                    fscanf(flujoSearchHour, "%s %s %s %s %s %s %s %s %s %s",
                           &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                           &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                           &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                           &hourForm.medicoAMaterno, &hourForm.especialidad); // Se escaneará la estructura "hourForm" dentro del almacén de datos
                    if (strstr(searchTerm, hourForm.nombrePila) != NULL && !feof(flujoSearchHour))
                    {
                        printf("\nSe ha encontrado la siguiente hora m%cdica agendada coincidente con el nombre %s:\n\n", 130, searchTerm); // Se desplegará la información de la(s) hora(s) médica(s) asociada(s) al nombre ingresado
                        printf("- RUN:    \t\t%s\n\n", hourForm.run);
                        printf("- Nombre: \t\t%s %s %s\n\n", hourForm.nombrePila, hourForm.apellidoP, hourForm.apellidoM);
                        printf("- Fecha: \t\t%s\n\n", hourForm.fecha);
                        printf("- Hora: \t\t%s\n\n", hourForm.hora);
                        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
                        printf("- Especialidad: \t%s\n\n", hourForm.especialidad);
                    }
                    else
                    {
                        printf("\nNo se han encontrado horas m%cdicas agendadas coincidentes con el nombre %s.\n", 130, searchTerm); // Se entregará un mensaje al usuario de que no se encontraron coincidencias
                    }
                }
                fflush(flujoSearchHour);
                fclose(flujoSearchHour);                                        // Se cierra el almacén de datos
                printf("\n%cDesea realizar una nueva b%cqueda?\n\n", 168, 163); // Se pregunta al usuario si desea realizar una nueva búsqueda
                printf("1) S%c.\n", 161);
                printf("2) No.\n\n");
                printf(">> ");
                scanf("%i", &yesNo);
                if (yesNo == 1) // En caso afirmativo, se retorna al menú de búsqueda de horas médicas
                {
                    return samOption(2);
                }
                else // En caso contrario, se retorna al menú principal del programa
                {
                    return samOption(1);
                }
            }
        }
        else if (searchOptions == 3) // Búsqueda de horas médicas por apellido paterno. Mismo comportamiento de las opciones anteriores
        {
            samHead(9);
            fflush(stdin);
            printf("\nIngrese un apellido paterno: ");
            fgets(searchTerm, MAX, stdin);
            strtok(searchTerm, "\n");

            FILE *flujoSearchHour = fopen("samHoursLog.txt", "a+"); // Se abre almacén de datos con horas médicas registradas en el sistema

            if (flujoSearchHour == NULL) // Si ocurre un error en la apertura del archivo...
            {
                system("cls");
                perror("Ha ocurrido un error inesperado"); // Se despliega un error junto al motivo (generado por el sistema)
            }
            else
            {
                samHead(9);
                while (!feof(flujoSearchHour)) // Mientras no sea el final del archivo...
                {
                    fscanf(flujoSearchHour, "%s %s %s %s %s %s %s %s %s %s",
                           &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                           &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                           &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                           &hourForm.medicoAMaterno, &hourForm.especialidad); // Se escaneará la estructura "hourForm" dentro del almacén de datos
                    if (strstr(searchTerm, hourForm.apellidoP) != NULL && !feof(flujoSearchHour))
                    {
                        printf("\nSe ha encontrado la siguiente hora m%cdica agendada coincidente con el apellido paterno %s:\n", 130, searchTerm);
                        printf("- RUN:    \t\t%s\n\n", hourForm.run);
                        printf("- Nombre: \t\t%s %s %s\n\n", hourForm.nombrePila, hourForm.apellidoP, hourForm.apellidoM);
                        printf("- Fecha: \t\t%s\n\n", hourForm.fecha);
                        printf("- Hora: \t\t%s\n\n", hourForm.hora);
                        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
                        printf("- Especialidad: \t%s\n\n", hourForm.especialidad);
                    }
                    else
                    {
                        printf("\nNo se han encontrado horas m%cdicas agendadas coincidentes con el apellido paterno %s.\n", 130, searchTerm);
                    }
                }
                fflush(flujoSearchHour);
                fclose(flujoSearchHour);                                        // Se cierra el almacén de datos
                printf("\n%cDesea realizar una nueva b%cqueda?\n\n", 168, 163); // Se pregunta al usuario si desea realizar una nueva búsqueda
                printf("1) S%c.\n", 161);
                printf("2) No.\n\n");
                printf(">> ");
                scanf("%i", &yesNo);
                if (yesNo == 1) // En caso afirmativo, se retorna al menú de búsqueda de horas médicas
                {
                    return samOption(2);
                }
                else // En caso contrario, se retorna al menú principal del programa
                {
                    return samOption(1);
                }
            }
        }
        else if (searchOptions == 4) // Búsqueda de horas médicas por apellido materno. Mismo comportamiento de las opciones anteriores
        {
            samHead(10);
            fflush(stdin);
            printf("\nIngrese un apellido materno: ");
            fgets(searchTerm, MAX, stdin);
            strtok(searchTerm, "\n");

            FILE *flujoSearchHour = fopen("samHoursLog.txt", "a+"); // Se abre almacén de datos con horas médicas registradas en el sistema

            if (flujoSearchHour == NULL) // Si ocurre un error en la apertura del archivo...
            {
                system("cls");
                perror("Ha ocurrido un error inesperado"); // Se despliega un error junto al motivo (generado por el sistema)
            }
            else
            {
                samHead(10);
                while (!feof(flujoSearchHour)) // Mientras no sea el final del archivo...
                {
                    fscanf(flujoSearchHour, "%s %s %s %s %s %s %s %s %s %s",
                           &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                           &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                           &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                           &hourForm.medicoAMaterno, &hourForm.especialidad); // Se escaneará la estructura "hourForm" dentro del almacén de datos
                    if (strstr(searchTerm, hourForm.apellidoM) != NULL && !feof(flujoSearchHour))
                    {
                        printf("\nSe ha encontrado la siguiente hora m%cdica agendada coincidente con el apellido materno %s:\n", 130, searchTerm);
                        printf("- RUN:    \t\t%s\n\n", hourForm.run);
                        printf("- Nombre: \t\t%s %s %s\n\n", hourForm.nombrePila, hourForm.apellidoP, hourForm.apellidoM);
                        printf("- Fecha: \t\t%s\n\n", hourForm.fecha);
                        printf("- Hora: \t\t%s\n\n", hourForm.hora);
                        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
                        printf("- Especialidad: \t%s\n\n", hourForm.especialidad);
                    }
                    else
                    {
                        printf("\nNo se han encontrado horas m%cdicas agendadas coincidentes con el apellido materno %s.\n", 130, searchTerm);
                    }
                }
                fflush(flujoSearchHour);
                fclose(flujoSearchHour);                                        // Se cierra el almacén de datos
                printf("\n%cDesea realizar una nueva b%cqueda?\n\n", 168, 163); // Se pregunta al usuario si desea realizar una nueva búsqueda
                printf("1) S%c.\n", 161);
                printf("2) No.\n\n");
                printf(">> ");
                scanf("%i", &yesNo);
                if (yesNo == 1) // En caso afirmativo, se retorna al menú de búsqueda de horas médicas
                {
                    return samOption(2);
                }
                else // En caso contrario, se retorna al menú principal del programa
                {
                    return samOption(1);
                }
            }
        }
        else if (searchOptions == 5) // Búsqueda de horas médicas por fecha. Mismo comportamiento de las opciones anteriores
        {
            samHead(11);
            fflush(stdin);
            printf("\nIngrese una fecha (formato DD/MM/AAAA): ");
            fgets(searchTerm, MAX, stdin);
            strtok(searchTerm, "\n");

            FILE *flujoSearchHour = fopen("samHoursLog.txt", "a+"); // Se abre almacén de datos con horas médicas registradas en el sistema

            if (flujoSearchHour == NULL) // Si ocurre un error en la apertura del archivo...
            {
                system("cls");
                perror("Ha ocurrido un error inesperado"); // Se despliega un error junto al motivo (generado por el sistema)
            }
            else
            {
                samHead(11);
                while (!feof(flujoSearchHour)) // Mientras no sea el final del archivo...
                {
                    fscanf(flujoSearchHour, "%s %s %s %s %s %s %s %s %s %s",
                           &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                           &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                           &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                           &hourForm.medicoAMaterno, &hourForm.especialidad); // Se escaneará la estructura "hourForm" dentro del almacén de datos
                    if (strstr(searchTerm, hourForm.fecha) != NULL && !feof(flujoSearchHour))
                    {
                        printf("\nSe ha encontrado la siguiente hora m%cdica agendada coincidente con la fecha %s:\n", 130, searchTerm);
                        printf("- RUN:    \t\t%s\n\n", hourForm.run);
                        printf("- Nombre: \t\t%s %s %s\n\n", hourForm.nombrePila, hourForm.apellidoP, hourForm.apellidoM);
                        printf("- Fecha: \t\t%s\n\n", hourForm.fecha);
                        printf("- Hora: \t\t%s\n\n", hourForm.hora);
                        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
                        printf("- Especialidad: \t%s\n\n", hourForm.especialidad);
                    }
                    else
                    {
                        printf("\nNo se han encontrado horas m%cdicas agendadas coincidentes con la fecha %s.\n", 130, searchTerm);
                    }
                }
                fflush(flujoSearchHour);
                fclose(flujoSearchHour);                                        // Se cierra el almacén de datos
                printf("\n%cDesea realizar una nueva b%cqueda?\n\n", 168, 163); // Se pregunta al usuario si desea realizar una nueva búsqueda
                printf("1) S%c.\n", 161);
                printf("2) No.\n\n");
                printf(">> ");
                scanf("%i", &yesNo);
                if (yesNo == 1) // En caso afirmativo, se retorna al menú de búsqueda de horas médicas
                {
                    return samOption(2);
                }
                else // En caso contrario, se retorna al menú principal del programa
                {
                    return samOption(1);
                }
            }
        }
        else if (searchOptions == 6)
        {
            samOption(2);
        }
        else if (searchOptions == 7) // Opción para salir del programa
        {
            samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
        }
        else // Cada vez que el usuario ingrese una opción errónea...
        {
            samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
            do             // Se retorna al principio del menú de búsqueda de horas médicas
            {
                samOption(2);
            } while (searchOptions == -1);
        }
        return 2;
    }
    else if (programOptions == 3) // Opciones del menú de administración de horas médicas del programa
    {
        samHead(3); // Encabezado del menú de administración de horas médicas del programa
        printf("%cQu%c desea hacer ahora? Escriba el n%cmero de la opci%cn correspondiente:\n\n", 168, 130, 163, 162);
        printf("1) Agendar hora m%cdica.\n", 130);
        printf("2) Eliminar hora m%cdica.\n", 130);
        printf("3) Regresar al men%c principal.\n", 163);
        printf("4) Salir del programa.\n\n");
        printf(">> ");
        scanf("%i", &adminOptions);
        return 3;
    }
    else if (programOptions == 4) // Registro de horas médicas agendadas previamente
    {
        samHead(4);                                        // Encabezado del registro de horas médicas agendadas previamente
        FILE *seeHoursLog = fopen("samHoursLog.txt", "r"); // Se abre almacén de datos con horas médicas registradas en el sistema

        if (seeHoursLog == NULL) // Si ocurre un error en la apertura del archivo...
        {
            system("cls");
            perror("Ha ocurrido un error:"); // Se despliega un error junto al motivo (generado por el sistema)
        }
        else
        {
            printf("RUN\t\tNOMBRE\t\t\t\t\tFECHA\t\t\tHORA\t\t\tMEDICO\t\t\t\t\tESPECIALIDAD\n");
            printf("____________________________________________________________________________________________________________________________________________________________\n\n");
            while (!feof(seeHoursLog))
            {
                fscanf(seeHoursLog, "%s %s %s %s %s %s %s %s %s %s",
                       &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                       &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                       &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                       &hourForm.medicoAMaterno, &hourForm.especialidad); // Se escaneará la estructura "hourForm" dentro del almacén de datos
                if (!feof(seeHoursLog))
                {
                    printf("%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                           hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                           hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                           hourForm.medicoNPila, hourForm.medicoAPaterno,
                           hourForm.medicoAMaterno, hourForm.especialidad); // Se despliega tabla con las horas médicas ingresadas en el sistema
                }
            }
        }
        fflush(seeHoursLog);
        fclose(seeHoursLog); // Se cierra el almacén de datos
        samOption(3);
        return 4;
    }
    else if (programOptions == 5) // Formulario para agendar horas médicas
    {
        samHead(5);                                                                                                 // Encabezado del formulario para agendar horas médicas
        printf("Ingrese los datos solicitados a continuaci%cn para agregar una nueva hora m%cdica.\n\n", 162, 130); // Se solicitan datos al usuario para agendar nueva hora médica
        printf("RUN (formato 12345678-9):        ");
        fflush(stdin);
        fgets(hourForm.run, MAX, stdin);
        fflush(stdin);
        printf("\nPrimer nombre:                   ");
        fgets(hourForm.nombrePila, MAX, stdin);
        fflush(stdin);
        printf("\nApellido paterno:                ");
        fgets(hourForm.apellidoP, MAX, stdin);
        fflush(stdin);
        printf("\nApellido materno:                ");
        fgets(hourForm.apellidoM, MAX, stdin);
        fflush(stdin);
        printf("\nFecha (formato DD-MM-AAAA):      ");
        fgets(hourForm.fecha, MAX, stdin);
        fflush(stdin);
        printf("\nIndique la especialidad m%cdica para la que se solicita una hora. Escriba el n%cmero\n", 130, 163); // Se solicita al usuario indicar la especialidad para la que se solicita una hora
        printf("de la opci%cn correspondiente:\n\n", 162);
        printf("1)  Cardiolog%ca.\t\t\t2)  Dermatolog%ca.\t\t\t3)  Gastroenterolog%ca.\n", 161, 161, 161);
        printf("4)  Geriatr%ca.\t\t\t\t5)  Ginecolog%ca.\t\t\t6)  Kinesiolog%ca.\n", 161, 161, 161);
        printf("7)  Medicina General.\t\t\t8)  Neurolog%ca.\t\t\t\t9)  Nutriolog%ca.\n", 161, 161);
        printf("10) Odontolog%ca.\t\t\t11) Oftalmolog%ca.\t\t\t12) Otorrinolaringolog%ca.\n", 161, 161, 161);
        printf("13) Pediatr%ca.\t\t\t\t14) Psicolog%ca.\t\t\t\t15) Psiquiatr%ca.\n", 161, 161, 161);
        printf("16) Traumatolog%ca.\t\t\t17) Urolog%ca.\n\n", 161, 161);
        printf(">> ");
        scanf("%i", &especialidad);
        if (especialidad == 1) // Cardiología
        {
            medicalInfo(1);
        }
        if (especialidad == 2) // Dermatología
        {
            medicalInfo(2);
        }
        if (especialidad == 3) // Gastroenterología
        {
            medicalInfo(3);
        }
        if (especialidad == 4) // Geriatría
        {
            medicalInfo(4);
        }
        if (especialidad == 5) // Ginecología
        {
            medicalInfo(5);
        }
        if (especialidad == 6) // Kinesiología
        {
            medicalInfo(6);
        }
        if (especialidad == 7) // Medicina General
        {
            medicalInfo(7);
        }
        if (especialidad == 8) // Neurología
        {
            medicalInfo(8);
        }
        if (especialidad == 9) // Nutriología
        {
            medicalInfo(9);
        }
        if (especialidad == 10) // Odontología
        {
            medicalInfo(10);
        }
        if (especialidad == 11) // Oftalmología
        {
            medicalInfo(11);
        }
        if (especialidad == 12) // Otorrinolaringología
        {
            medicalInfo(12);
        }
        if (especialidad == 13) // Pediatría
        {
            medicalInfo(13);
        }
        if (especialidad == 14) // Psicología
        {
            medicalInfo(14);
        }
        if (especialidad == 15) // Psiquiatría
        {
            medicalInfo(15);
        }
        if (especialidad == 16) // Traumatología
        {
            medicalInfo(16);
        }
        if (especialidad == 17) // Urología
        {
            medicalInfo(17);
        }
        return 5;
    }
    else if (programOptions == 6) // Formulario para eliminar horas médicas
    {
        samHead(6);              // Encabezado del formulario para eliminar horas médicas
        char deletionEntry[MAX]; // Entrada para buscar hora médica a eliminar
        int cont = 0;            // Contador

        FILE *seeHoursLog; // Se crea variable tipo FILE que apunta al flujo "seeHoursLog"

        seeHoursLog = fopen("samHoursLog.txt", "r+"); // Se abre almacén de datos con horas médicas registradas en el sistema

        if (seeHoursLog == NULL) // Si ocurre un error en la apertura del archivo...
        {
            system("cls");
            perror("Ha ocurrido un error:"); // Se despliega un error junto al motivo (generado por el sistema)
        }
        else
        {
            printf("RUN\t\tNOMBRE\t\t\t\t\tFECHA\t\t\tHORA\t\t\tMEDICO\t\t\t\t\tESPECIALIDAD\n");
            printf("____________________________________________________________________________________________________________________________________________________________\n\n");
            while (!feof(seeHoursLog))
            {
                fscanf(seeHoursLog, "%s %s %s %s %s %s %s %s %s %s",
                       &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                       &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                       &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                       &hourForm.medicoAMaterno, &hourForm.especialidad); // Se escanea la estructura "hourForm" dentro del almacén de datos
                if (!feof(seeHoursLog))
                {
                    printf("%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                           hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                           hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                           hourForm.medicoNPila, hourForm.medicoAPaterno,
                           hourForm.medicoAMaterno, hourForm.especialidad); // Se despliega tabla con las horas médicas ingresadas en el sistema
                }
            }
        }
        fclose(seeHoursLog); // Se cierra almacén de datos

        FILE *fileHoursLog, *auxHoursLog; // Se crean nuevas variables de tipo FILE, una que apunta al almacén de datos con horas médicas agendadas y otra a un archivo auxiliar

        fileHoursLog = fopen("samHoursLog.txt", "r+"); // Se abre almacén de datos con horas médicas registradas en el sistema
        auxHoursLog = fopen("auxHoursLog.txt", "w+");  // Se abre archivo auxiliar

        fflush(stdin);
        printf("Indique el nombre del registro de la hora agendada a eliminar: ", 161); // Se pregunta al usuario el registro a eliminar
        fgets(deletionEntry, MAX, stdin);

        while (fscanf(fileHoursLog, "%s %s %s %s %s %s %s %s %s %s",
                      &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                      &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                      &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                      &hourForm.medicoAMaterno, &hourForm.especialidad) &&
               cont == 0)
        {
            if (strstr(hourForm.nombrePila, deletionEntry)) // Se compara el contenido de la variables
            {
                fprintf(auxHoursLog, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad); //
            }
            cont++;
        }
        fclose(fileHoursLog);
        fclose(auxHoursLog);
        fileHoursLog = fopen("samHoursLog.txt", "w+");
        auxHoursLog = fopen("auxHoursLog.txt", "r+");
        while (fscanf(auxHoursLog, "%s %s %s %s %s %s %s %s %s %s",
                      &hourForm.run, &hourForm.nombrePila, &hourForm.apellidoP,
                      &hourForm.apellidoM, &hourForm.fecha, &hourForm.hora,
                      &hourForm.medicoNPila, &hourForm.medicoAPaterno,
                      &hourForm.medicoAMaterno, &hourForm.especialidad) &&
               cont == 0)
        {
            fprintf(fileHoursLog, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                    hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                    hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                    hourForm.medicoNPila, hourForm.medicoAPaterno,
                    hourForm.medicoAMaterno, hourForm.especialidad);
            cont++;
        }
        fflush(fileHoursLog);
        fflush(auxHoursLog);
        fclose(fileHoursLog);      // Se cierra almacén de datos
        fclose(auxHoursLog);       // Se cierra archivo auxiliar
        remove("auxHoursLog.txt"); // Se borra archivo auxiliar
        samHead(6);                // Encabezado del formulario para eliminar horas médicas
        samOption(8);              // Opciones del mensaje de éxito tras eliminar hora médica
        return 6;
    }
    else if (programOptions == 7) // Mensaje de éxito tras agendar hora médica y pregunta al usuario sobre sí desea realizar un nuevo agendamiento
    {
        printf("\n%cLa hora m%cdica para el RUN %s ha sido agendada exit%csamente!", 173, 130, hourForm.run, 162);
        printf("\n\n%cQu%c desea hacer ahora? Escriba el n%cmero de la opci%cn correspondiente:\n\n", 168, 130, 163, 162);
        printf("1) Agendar una nueva hora m%cdica.\n", 130);
        printf("2) Eliminar una hora m%cdica.\n", 130);
        printf("3) Regresar al men%c principal.\n", 163);
        printf("4) Salir del programa.\n\n");
        printf(">> ");
        return 7;
    }
    else if (programOptions == 8) // Mensaje de éxito tras eliminar hora médica y pregunta al usuario sobre sí desea hacer una nueva eliminación
    {
        printf("\n%cLa hora m%cdica para ha sido eliminada exit%csamente del sistema!", 173, 130, hourForm.run, 162);
        printf("\n\n%cQu%c desea hacer ahora? Escriba el n%cmero de la opci%cn correspondiente:\n\n", 168, 130, 163, 162);
        printf("1) Agendar una hora m%cdica.\n", 130);
        printf("2) Eliminar una nueva hora m%cdica.\n", 130);
        printf("3) Regresar al men%c principal.\n", 163);
        printf("4) Salir del programa.\n\n");
        printf(">> ");
        return 8;
    }
}