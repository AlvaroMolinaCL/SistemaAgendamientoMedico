/**
 * @file samMedical.c
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
#include <time.h>
#include "samHeads.h"
#include "samMedical.h"
#include "samMessages.h"
#include "samOptions.h"
#include "samStructs.h"

/* Función que despliega listado de profesionales de la salud con sus horas disponibles para agendar y proceso de ingreso al almacén de datos de nuevas horas médicas ingresadas */
int medicalInfo(int medicalSpecialty)
{
    switch (medicalSpecialty)
    {
    case 1:                                                                                           // Cardiología
        strcpy(hourForm.nombre, hourForm.nombrePila);                                                 // Se copia en la cadena "hourForm.nombre" el contenido de "hourForm.nombrePila"
        strtok(hourForm.nombre, "\n");                                                                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");                                                                 // Se agrega un espacio a la cadena "hourForm.nombre"
        strcat(hourForm.nombre, hourForm.apellidoP);                                                  // Se copia en la cadena "hourForm.nombre" el contenido de "hourForm.apellidoP"
        strtok(hourForm.nombre, "\n");                                                                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");                                                                 // Se agrega un espacio a la cadena "hourForm.nombre"
        strcat(hourForm.nombre, hourForm.apellidoM);                                                  // Se copia en la cadena "hourForm.nombre" el contenido de "hourForm.apellidoM"
        strcpy(hourForm.especialidad, "Cardiologia");                                                 // Se copia en la cadena "hourForm.especialidad" el nombre de la especialidad de este apartado
        samHead(5);                                                                                   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Cardiolog%ca: \n\n\n", 160, 161); // Listado de profesionales de la salud de esta área con sus horarios disponibles para ser agendados
        printf("*) DR. ALEJANDRO P%cREZ GONZ%cLEZ\n\n", 144, 181);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. PABLO TAPIA JORQUERA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163); // Se le pregunta al usuario la hora que desea reservar
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Alejandro");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Gonzalez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Alejandro");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Gonzalez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Alejandro");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Gonzalez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Alejandro");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Gonzalez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Alejandro");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Gonzalez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Alejandro");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Gonzalez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Pablo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Tapia");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Jorquera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Pablo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Tapia");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Jorquera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Pablo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Tapia");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Jorquera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Pablo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Tapia");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Jorquera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Pablo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Tapia");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Jorquera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Pablo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Tapia");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Jorquera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1) // En caso de una respuesta afirmativa
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+"); // Se abre almacén de datos con horas médicas registradas en el sistema

            if (flujoNewHour == NULL) // Si ocurre un error en la apertura del archivo...
            {
                perror("Ha ocurrido un error inesperado"); // Se despliega un error junto al motivo (generado por el sistema)
            }
            else // Se eliminan saltos de linea con "strtok()"
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad); // Se copian los datos recopilados del formulario hacia el almacén de datos
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);

            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);   // Encabezado del menú principal del programa
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 2:                                           // Dermatología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en el caso 1
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Dermatologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Dermatolog%ca: \n\n\n", 160, 161);
        printf("*) DR. GUSTAVO AGUAYO CONTRERAS\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. ALEJANDRA MONTERO LOYOLA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Gustavo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Aguayo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Contreras");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Gustavo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Aguayo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Contreras");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Gustavo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Aguayo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Contreras");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Gustavo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Aguayo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Contreras");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Gustavo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Aguayo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Contreras");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Gustavo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Aguayo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Contreras");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Alejandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montero");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Loyola");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Alejandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montero");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Loyola");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Alejandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montero");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Loyola");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Alejandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montero");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Loyola");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Alejandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montero");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Loyola");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Alejandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montero");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Loyola");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 3:                                           // Gastroenterología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Gastroenterologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Gastroenterolog%ca: \n\n\n", 160, 161);
        printf("*) DRA. KARLA MORALES ZAMORANO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. RICARDO MONTOYA FIGUEROA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Karla");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Morales");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Zamorano");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Karla");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Morales");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Zamorano");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Karla");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Morales");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Zamorano");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Karla");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Morales");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Zamorano");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Karla");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Morales");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Zamorano");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Karla");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Morales");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Zamorano");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Ricardo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montoya");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Figueroa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Ricardo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montoya");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Figueroa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Ricardo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montoya");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Figueroa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Ricardo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montoya");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Figueroa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Ricardo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montoya");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Figueroa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Ricardo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Montoya");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Figueroa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 4:                                           // Geriatría
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Geriatria");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Geriatr%ca: \n\n\n", 160, 161);
        printf("*) DRA. CONSTANZA MENARES CONCHA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. ANA MU%cOZ ESQUIVEL\n\n", 165);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Constanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Menares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Concha");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Constanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Menares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Concha");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Constanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Menares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Concha");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Constanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Menares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Concha");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Constanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Menares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Concha");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Constanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Menares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Concha");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Ana");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Munoz");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Esquivel");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Ana");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Munoz");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Esquivel");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Ana");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Munoz");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Esquivel");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Ana");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Munoz");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Esquivel");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Ana");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Munoz");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Esquivel");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Ana");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Munoz");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Esquivel");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 5:                                           // Ginecología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Ginecologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Ginecolog%ca: \n\n\n", 160, 161);
        printf("*) DR. DANIEL BALLADARES AGUILERA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. PAMELA OJEDA PALMA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Daniel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Balladares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Daniel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Balladares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Daniel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Balladares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Daniel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Balladares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Daniel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Balladares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Daniel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Balladares");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Pamela");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ojeda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Palma");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Pamela");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ojeda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Palma");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Pamela");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ojeda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Palma");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Pamela");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ojeda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Palma");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Pamela");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ojeda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Palma");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Pamela");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ojeda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Palma");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 6:                                           // Kinesiología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Kinesiologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Kinesiolog%ca: \n\n\n", 160, 161);
        printf("*) DR. HUMBERTO PEREDA DUARTE\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. FRANCISCA VALENZUELA TRONCOSO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 7:                                           // Medicina General
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Medicina General");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Medicina General: \n\n\n", 160, 161);
        printf("*) DRA. ANDREA JARAMILLO REBOLLEDO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. JOS%C LUIS PONCE\n\n", 144);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Andrea");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Jaramillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Rebolledo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Andrea");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Jaramillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Rebolledo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Andrea");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Jaramillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Rebolledo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Andrea");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Jaramillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Rebolledo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Andrea");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Jaramillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Rebolledo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Andrea");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Jaramillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Rebolledo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Jose");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Luis");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ponce");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Jose");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Luis");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ponce");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Jose");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Luis");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ponce");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Jose");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Luis");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ponce");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Jose");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Luis");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ponce");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Jose");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Luis");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ponce");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 8:                                           // Neurología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Neurologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Neurolog%ca: \n\n\n", 160, 161);
        printf("*) DRA. SANDRA MORENO ROBLES\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. JAVIERA ZAVALA HENR%CQUEZ\n\n", 214);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Sandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Moreno");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Robles");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Sandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Moreno");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Robles");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Sandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Moreno");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Robles");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Sandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Moreno");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Robles");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Sandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Moreno");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Robles");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Sandra");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Moreno");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Robles");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Javiera");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Zavala");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Henriquez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Javiera");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Zavala");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Henriquez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Javiera");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Zavala");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Henriquez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Javiera");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Zavala");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Henriquez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Javiera");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Zavala");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Henriquez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Javiera");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Zavala");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Henriquez");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 9:                                           // Nutriología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Nutriologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Nutriolog%ca: \n\n\n", 160, 161);
        printf("*) DR. HUMBERTO PEREDA DUARTE\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. FRANCISCA VALENZUELA TRONCOSO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Humberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Pereda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Duarte");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Francisca");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Valenzuela");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Troncoso");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 10:                                          // Odontología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Odontologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Odontolog%ca: \n\n\n", 160, 161);
        printf("*) DR. ESTEBAN CONTRERAS CID\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. PAULINA CISTERNAS SOTO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Esteban");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Contreras");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Cid");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Esteban");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Contreras");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Cid");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Esteban");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Contreras");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Cid");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Esteban");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Contreras");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Cid");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Esteban");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Contreras");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Cid");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Esteban");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Contreras");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Cid");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Paulina");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Cisternas");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Soto");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Paulina");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Cisternas");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Soto");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Paulina");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Cisternas");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Soto");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Paulina");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Cisternas");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Soto");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Paulina");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Cisternas");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Soto");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Paulina");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Cisternas");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Soto");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 11:                                          // Oftalmología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Oftalmologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Oftalmolog%ca: \n\n\n", 160, 161);
        printf("*) DRA. PAULETTE IBARRA ULLOA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. H%cTOR GALLARDO AGUILERA\n\n", 144);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Paulette");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ibarra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ulloa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Paulette");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ibarra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ulloa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Paulette");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ibarra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ulloa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Paulette");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ibarra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ulloa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Paulette");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ibarra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ulloa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Paulette");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ibarra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ulloa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Hector");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Gallardo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Hector");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Gallardo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Hector");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Gallardo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Hector");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Gallardo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Hector");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Gallardo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Hector");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Gallardo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Aguilera");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 12:                                          // Otorrinolaringología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Otorrinolaringologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Otorrinolaringolog%ca: \n\n\n", 160, 161);
        printf("*) DRA. URSULA L%cPEZ GARC%cS\n\n", 224, 144);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. IRMA ASTUDILLO IBARRA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Ursula");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Lopez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Garces");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Ursula");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Lopez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Garces");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Ursula");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Lopez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Garces");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Ursula");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Lopez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Garces");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Ursula");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Lopez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Garces");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Ursula");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Lopez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Garces");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Irma");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Astudillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ibarra");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Irma");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Astudillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ibarra");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Irma");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Astudillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ibarra");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Irma");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Astudillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ibarra");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Irma");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Astudillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ibarra");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Irma");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Astudillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Ibarra");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 13:                                          // Pediatría
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Pedriatria");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Pediatr%ca: \n\n\n", 160, 161);
        printf("*) DR. ROBERTO TRUJILLO OVIEDO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. MANUEL ITURRIAGA ROA\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Roberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Trujillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Oviedo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Roberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Trujillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Oviedo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Roberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Trujillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Oviedo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Roberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Trujillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Oviedo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Roberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Trujillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Oviedo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Roberto");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Trujillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Oviedo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Manuel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Iturriaga");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Roa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Manuel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Iturriaga");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Roa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Manuel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Iturriaga");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Roa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Manuel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Iturriaga");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Roa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Manuel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Iturriaga");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Roa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Manuel");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Iturriaga");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Roa");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 14:                                          // Psicología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Psicologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Psicolog%ca: \n\n\n", 160, 161);
        printf("*) DR. JUAN CARLOS HURTADO\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DRA. ESPERANZA SAAVEDRA PEDREROS\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Juan");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Carlos");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Hurtado");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Juan");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Carlos");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Hurtado");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Juan");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Carlos");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Hurtado");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Juan");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Carlos");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Hurtado");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Juan");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Carlos");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Hurtado");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Juan");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Carlos");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Hurtado");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Esperanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Saavedra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Pedreros");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Esperanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Saavedra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Pedreros");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Esperanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Saavedra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Pedreros");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Esperanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Saavedra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Pedreros");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Esperanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Saavedra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Pedreros");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Esperanza");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Saavedra");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Pedreros");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 15:                                          // Psiquiatría
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Psiquiatria");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Psiquiatr%ca: \n\n\n", 160, 161);
        printf("*) DRA. GLORIA CASTILLO URIBE\n\n");
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. %cSCAR UGALDE ORELLANA\n\n", 224);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Gloria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Castillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Uribe");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Gloria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Castillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Uribe");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Gloria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Castillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Uribe");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Gloria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Castillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Uribe");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Gloria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Castillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Uribe");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Gloria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Castillo");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Uribe");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Oscar");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ugalde");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Oscar");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ugalde");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Oscar");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ugalde");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Oscar");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ugalde");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Oscar");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ugalde");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Oscar");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Ugalde");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 16:                                          // Traumatología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Traumatologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Traumatolog%ca: \n\n\n", 160, 161);
        printf("*) DR. WALDO DUR%cN MELO\n\n", 181);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. ANDR%cS ESPINOZA SOTELO\n\n", 144);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Waldo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Duran");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Melo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Waldo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Duran");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Melo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Waldo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Duran");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Melo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Waldo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Duran");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Melo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Waldo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Duran");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Melo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Waldo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Duran");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Melo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Andres");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Espinoza");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Sotelo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Andres");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Espinoza");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Sotelo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Andres");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Espinoza");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Sotelo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Andres");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Espinoza");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Sotelo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Andres");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Espinoza");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Sotelo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Andres");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Espinoza");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Sotelo");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    case 17:                                          // Urología
        strcpy(hourForm.nombre, hourForm.nombrePila); // Mismos procedimientos que en los casos anteriores
        strtok(hourForm.nombre, "\n");                // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoP);
        strtok(hourForm.nombre, "\n"); // Se elimina salto de linea
        strcat(hourForm.nombre, " ");
        strcat(hourForm.nombre, hourForm.apellidoM);
        strcpy(hourForm.especialidad, "Urologia");
        samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\nListado de profesionales de la salud del %crea de Urolog%ca: \n\n\n", 160, 161);
        printf("*) DRA. MAR%cA FERNANDA ORELLANA\n\n", 214);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("1) 08:30\t\t2) 10:30\t\t3) 12:30\n");
        printf("4) 15:30\t\t5) 17:30\t\t6) 19:30\n\n\n");
        printf("*) DR. GUILLERMO P%cREZ LOBOS\n\n", 144);
        printf("Horarios disponibles para el %s\n", hourForm.fecha);
        printf("7) 09:45\t\t8) 11:15\t\t9) 13:20\n");
        printf("10) 16:15\t\t11) 18:35\t\t12) 19:45\n\n\n");
        printf("Seleccione la hora que se desea reservar a continuaci%cn. Aseg%crese de que\n", 162, 163);
        printf("la hora seleccionada no haya sido agendada previamente, con el objetivo de\n");
        printf("evitar choques de horas agendadas.");
        printf("\n\nEscriba el n%cmero de la opci%cn correspondiente:\n\n", 163, 162);
        printf(">> ");
        scanf("%i", &medicalHour);

        if (medicalHour == 1) // Hora 1
        {
            strcpy(hourForm.medicoNPila, "Maria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Fernanda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "08:30");
        }
        else if (medicalHour == 2) // Hora 2
        {
            strcpy(hourForm.medicoNPila, "Maria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Fernanda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "10:30");
        }
        else if (medicalHour == 3) // Hora 3
        {
            strcpy(hourForm.medicoNPila, "Maria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Fernanda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "12:30");
        }
        else if (medicalHour == 4) // Hora 4
        {
            strcpy(hourForm.medicoNPila, "Maria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Fernanda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "15:30");
        }
        else if (medicalHour == 5) // Hora 5
        {
            strcpy(hourForm.medicoNPila, "Maria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Fernanda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "17:30");
        }
        else if (medicalHour == 6) // Hora 6
        {
            strcpy(hourForm.medicoNPila, "Maria");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Fernanda");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Orellana");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:30");
        }
        else if (medicalHour == 7) // Hora 7
        {
            strcpy(hourForm.medicoNPila, "Guillermo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Lobos");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "09:45");
        }
        else if (medicalHour == 8) // Hora 8
        {
            strcpy(hourForm.medicoNPila, "Guillermo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Lobos");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "11:15");
        }
        else if (medicalHour == 9) // Hora 9
        {
            strcpy(hourForm.medicoNPila, "Guillermo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Lobos");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "13:20");
        }
        else if (medicalHour == 10) // Hora 10
        {
            strcpy(hourForm.medicoNPila, "Guillermo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Lobos");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "16:15");
        }
        else if (medicalHour == 11) // Hora 11
        {
            strcpy(hourForm.medicoNPila, "Guillermo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Lobos");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "18:35");
        }
        else if (medicalHour == 12) // Hora 12
        {
            strcpy(hourForm.medicoNPila, "Guillermo");
            strtok(hourForm.medicoNPila, "\n");
            strcpy(hourForm.medicoAPaterno, "Perez");
            strtok(hourForm.medicoAPaterno, "\n");
            strcpy(hourForm.medicoAMaterno, "Lobos");
            strtok(hourForm.medicoAMaterno, "\n");
            strcpy(hourForm.hora, "19:45");
        }

        samHead(5);                                                                                              // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
        printf("\n%cEst%c seguro que desea reservar la hora con la siguiente informaci%cn?\n\n", 168, 160, 162); // Se le pide al usuario confirmar la reserva de la hora médica
        printf("- RUN:    \t\t%s\n", hourForm.run);
        printf("- Nombre: \t\t%s\n", hourForm.nombre);
        printf("- Fecha: \t\t%s\n", hourForm.fecha);
        printf("- Hora: \t\t%s\n\n", hourForm.hora);
        printf("- M%cdico: \t\tDr. %s %s %s\n\n", 130, hourForm.medicoNPila, hourForm.medicoAPaterno, hourForm.medicoAMaterno);
        printf("- Especialidad: \t%s\n\n\n", hourForm.especialidad);
        printf("1) S%c.\n", 161);
        printf("2) No.\n\n");
        printf(">> ");
        scanf("%i", &yesNo);

        if (yesNo == 1)
        {
            FILE *flujoNewHour = fopen("samHoursLog.txt", "a+");
            if (flujoNewHour == NULL)
            {
                perror("Ha ocurrido un error inesperado");
            }
            else
            {
                strtok(hourForm.run, "\n");
                strtok(hourForm.nombrePila, "\n");
                strtok(hourForm.apellidoP, "\n");
                strtok(hourForm.apellidoM, "\n");
                strtok(hourForm.fecha, "\n");
                fprintf(flujoNewHour, "%s\t%s %s %s\t\t\t%s\t\t%s\t\t\t%s %s %s\t\t%s\n\n",
                        hourForm.run, hourForm.nombrePila, hourForm.apellidoP,
                        hourForm.apellidoM, hourForm.fecha, hourForm.hora,
                        hourForm.medicoNPila, hourForm.medicoAPaterno,
                        hourForm.medicoAMaterno, hourForm.especialidad);
            }

            fflush(flujoNewHour);
            fclose(flujoNewHour); // Se cierra el almacén de datos

            samHead(5); // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
            samOption(7);
            scanf("%i", &readyAddHour);
            if (readyAddHour == 1) // Agendar una nueva hora médica
            {
                fflush(stdin);
                samHead(5);   // Encabezado del formulario para agendar horas médicas // Encabezado del formulario para agendar horas médicas
                samOption(5); // Formulario para agendar horas médicas
            }
            else if (readyAddHour == 2) // Eliminar una hora médica
            {
                fflush(stdin);
                samHead(6);   // Encabezado del formulario para eliminar horas médicas
                samOption(6); // Formulario para eliminar horas médicas
            }
            else if (readyAddHour == 3) // Regresar al menú principal
            {
                fflush(stdin);
                samHead(1);
                samOption(1); // Opciones del menú principal del programa
            }
            else if (readyAddHour == 4) // Salir del programa
            {
                samMessage(1); // Función que devuelve mensaje que indica fin de ejecución del programa
            }
            else // Cada vez que el usuario ingrese una opción errónea...
            {
                fflush(stdin);
                samMessage(2); // Función que devuelve mensaje al digitar una opción errónea dentro de los menús del programa
                do             // Se retorna al principio del menú de administración de horas médicas
                {
                    samOption(7); // Se reitera la pregunta
                } while (readyAddHour == -1);
            }
        }
        else
        {
            fflush(stdin);
            samHead(5);   // Encabezado del formulario para agendar horas médicas
            samOption(5); // Formulario para agendar horas médicas
        }
        return 1;
        break;

    default:
        break;
    }
}