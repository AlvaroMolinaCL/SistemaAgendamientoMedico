/**
 * @file samStructs.h
 * @authors Álvaro Molina Jara (amolinaj@ing.ucsc.cl), Juliano Muñoz Sepúlveda (jmunozse@ing.ucsc.cl), Florencia Staforelli Reyes (fstaforelli@ing.ucsc.cl)
 * @brief Sistema de Agenda Médica Electrónica (S. A. M.) | Compilar con gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe
 * @version 1.5
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 **/

#ifndef SAMSTRUCTS_H
#define SAMSTRUCTS_H

#define MAX 200

/* Estructuras y enumeradores para los formularios y opciones de los menús del software */

// Estructura para formulario de agendamiento de horas médicas
typedef struct
{
    char run[MAX];
    char nombrePila[MAX];
    char apellidoP[MAX];
    char apellidoM[MAX];
    char nombre[MAX]; // Aquí se copia el contenido de las cadenas nombrePila, apellidoP y apellidoM
    char fecha[MAX];
    char hora[MAX];
    char especialidad[MAX];
    char medicoNPila[MAX];
    char medicoAPaterno[MAX];
    char medicoAMaterno[MAX];
    char medico[MAX];
} hourForm_t;

hourForm_t hourForm;

// Enumerador con opciones del menú principal
typedef enum
{
    BUSCAR = 1,
    ADMINISTRAR,
    REGISTROHORAS,
    SALIR
} principalOptions_enum;

principalOptions_enum principalOptions;

// Enumerador para opciones del menú de búsqueda
typedef enum
{
    BUSCAR_RUN = 1,
    BUSCAR_NOMBRE,
    BUSCAR_APELLIDOP,
    BUSCAR_APELLIDOM,
    BUSCAR_FECHA,
    BUSCAR_ATRAS,
    BUSCAR_SALIR
} searchOptions_enum;

searchOptions_enum searchOptions;

// Enumerador con opciones del menú de administración de horas médicas
typedef enum
{
    ADMIN_AGENDARHORA = 1,
    ADMIN_ELIMINARHORA,
    ADMIN_ATRAS,
    ADMIN_SALIR
} adminOptions_enum;

adminOptions_enum adminOptions;

// Enumerador con opciones de especialidades médicas
typedef enum
{
    CARDIOLOGO = 1,
    DERMATOLOGO,
    GASTROENTEROLOGO,
    GERIATRA,
    GINECOLOGO,
    KINESIOLOGO,
    MEDICOGENERAL,
    NEUROLOGO,
    NUTRIOLOGO,
    ODONTOLOGO,
    OFTALMOLOGO,
    OTORRINO,
    PEDIATRA,
    PSICOLOGO,
    PSIQUIATRA,
    TRAUMATOLOGO,
    UROLOGO
} especialidad_enum;

especialidad_enum especialidad;

// Enumerador con opciones de horas médicas
typedef enum
{
    MEDICALHOUR_1 = 1,
    MEDICALHOUR_2,
    MEDICALHOUR_3,
    MEDICALHOUR_4,
    MEDICALHOUR_5,
    MEDICALHOUR_6,
    MEDICALHOUR_7,
    MEDICALHOUR_8,
    MEDICALHOUR_9,
    MEDICALHOUR_10,
    MEDICALHOUR_11,
    MEDICALHOUR_12,
} medicalHour_enum;

medicalHour_enum medicalHour;

// Enumerador para opciones del menú desplegado en caso de éxito en agendamiento de hora médica
typedef enum
{
    READY_AGREGAR = 1,
    READY_ELIMINAR,
    READY_PRINCIPAL,
    READY_SALIR
} readyAddHour_enum;

readyAddHour_enum readyAddHour;

// Enumerador con mensajes de salida y de error en el programa
typedef enum
{
    MESSAGE_EXIT = 1,
    MESSAGE_ERROR
} messageType_enum;

messageType_enum messageType;

// Enumerador para preguntas de sí y no
typedef enum
{
    SI = 1,
    NO
} yesNo_enum;

yesNo_enum yesNo;

#endif