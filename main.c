/* ========================================================================== */
/* Proyecto: U2 AI5: Ejercicio: Abstracción procedimental.                    */
/* -------------------------------------------------------------------------- */
/* Autor: Michel Reyes                                                        */
/* ========================================================================== */
//Agregue a este codigo dos funciones mas, una que calcule el promedio de dos numeros y otra que calcule la division de dos numeros.
//Agregue una opcion mas al menu para que el usuario pueda seleccionar la opcion de promedio.
//Agregue una opcion mas al menu para que el usuario pueda seleccionar la opcion de division.
/* Bibliotecas */
#include <stdio.h>
/* Variables globales */
char opcion;
float num[3];
/* Prototipos de funciones */
void suma();
void resta();
void multiplicacion();
void promedio();
void division();
void menu();
void salir();

void exit(int i) ;

/* Funciones */
void suma () {
    printf("Ingrese el primer numero: ");
    scanf("%f", &num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num[1]);
    num[2] = num[0] + num[1];
    printf("El resultado de la suma es: %.2f\n", num[2]);
}

void resta () {
    printf("Ingrese el primer numero: ");
    scanf("%f", &num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num[1]);
    num[2] = num[0] - num[1];
    printf("El resultado de la resta es: %.2f\n", num[2]);
}

void multiplicacion () {
    printf("Ingrese el primer numero: ");
    scanf("%f", &num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num[1]);
    num[2] = num[0] * num[1];
    printf("El resultado de la multiplicacion es: %.2f\n", num[2]);
}

void division () {
    printf("Ingrese el primer numero: ");
    scanf("%f", &num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num[1]);
    num[2] = num[0] / num[1];
    if (num[1] == 0) {
        printf("No se puede dividir entre 0\n");
        return;
    }

    printf("El resultado de la division es: %.2f\n", num[2]);
}

void promedio () {
    printf("Ingrese el primer numero: ");
    scanf("%f", &num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num[1]);
    num[2] = (num[0] + num[1]) / 2;
    printf("El promedio de los numeros es: %.2f\n", num[2]);
}

void salir () {
    printf("Gracias por usar la calculadora.\n");
    printf("Presione Enter para continuar...");
    while (getchar() != '\n'); // Consumir caracteres adicionales hasta que se presione Enter
    getchar(); // Esperar a que se presione Enter
    exit(1);
}


/* Función principal */

void menu() {
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n");
    printf("5.- Promedio\n");
    printf("6.- Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multiplicacion();
            break;
        case 4:
            division();
            break;
        case 5:
            promedio();
            break;
        case 6:
            salir();
            break;
        default:
            printf("Opcion no valida. Intente de nuevo.\n");
            break;
    }
    printf("Presione Enter para continuar...");
    while (getchar() != '\n'); // Consumir caracteres adicionales hasta que se presione Enter
    getchar(); // Esperar a que se presione Ent
}

int main() {
    printf("\t\t\t\n Bienvenido a la calculadora\n");
    printf("\t\t\t\n Seleccione una opcion\n");
    while(1){
        printf("-.-.-.-.-.-.- MENU -.-.-.-.-.-.-\n");
        menu();
    }

    return 0;
}

