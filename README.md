# Sistema de Agendamiento Médico Electrónico (S. A. M.)

## Descripción

El Sistema de Agendamiento Médico Electrónico (S. A. M.) es un software que ha sido desarrollado en lenguaje de programación C y que tiene como principal objetivo facilitar la gestión de las horas médicas que tenga cada profesional de la salud dentro de un hospital, clínica o consultorio.

Lo anterior, permite que las instituciones médicas puedan prestar un servicio más eficaz hacia sus pacientes gracias a la inmediatez que tendrá este software a la hora de registrar o buscar la información solicitada debido a su interfaz minimalista por medio de una terminal de línea de comandos que tampoco requiere conexión a internet o a la red.

## Requisitos del sistema

* Sistemas operativos: Windows, GNU/Linux, MAC.
* Terminal de comandos:
  * Windows: CMD (Símbolo del Sistema) o PowerShell.
  * GNU/Linux o Mac: Bash.
* Compilador gcc.

## Instrucciones de compilación

Si es primera vez que va a ejecutar la copia del software en su computadora o escritorio remoto, el programa debe ser compilado en primera instancia de la forma que se indica a continuación.

1. Para compilar con archivo fuente, debe ingresar el siguiente comando dentro de su terminal:

    `gcc main.c samHeads.c samMedical.c samMessages.c samOptions.c samStructs.c -o main.exe`

2. Con lo anterior, el programa generará un archivo ejecutable (.exe) con el que quedará listo para ser utilizado las veces que sea requerido mediante el comando:

    `.\main.exe`

Nota: Es importante que todas estas operaciones se realicen con la terminal abierta en la carpeta donde se encuentra el programa.

## Limitaciones

* No se recomienda el uso de caracteres especiales tales como tildes (á, â, à), eñes (ñ), símbolos ($, %, &, #, ¿, ¡), entre otros, ya que no podrán ser leídos adecuadamente por el programa y podrían generar errores durante la ejecución del mismo o durante la comunicación con el flujo del almacén de datos.

* Debido a limitaciones del lenguaje de programación C, este programa no puede hacer un control automatizado de las horas médicas que son registradas dentro del almacén de datos del programa, por lo que es recomendable revisar constantemente el registro (se puede hacer desde la interfaz del programa o abriendo el archivo samHoursLog.txt ubicado en la carpeta de este software) antes de ingresar una nueva cita con el objetivo de prevenir choques de horarios.

## Autores

Este programa fue desarrollado como proyecto final del curso de Taller de Programación I (IN1045C) por estudiantes de la carrera de Ingeniería Civil Informática de la Universidad Católica de la Santísima Concepción.

* Álvaro Molina Jara.
* Juliano Muñoz Sepúlveda.
* Florencia Staforelli Reyes.