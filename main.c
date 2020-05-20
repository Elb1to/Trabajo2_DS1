#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <io.h>
#define clearScreen() printf("\e[1;1H\e[2J")

void costoDeLapices();
void almacenFactory();

void main() {
    int selectOption;
    clearScreen();

    printf("\n\n\n[]===========================================[]\n");
    printf("Selecciona un algoritmo que desees probar.\n\n");
    printf("1. Costo de lapices\n");
    printf("2. Almacen Factory\n");
    printf("3. Restaurante\n");
    printf("4. Vinicultores\n");
    printf("5. Viaje de estudios\n");
    printf("6. Envio de paquetes internacional\n");
    printf("7. Estacionamientos\n");
    printf("8. Edad de 3 personas\n");
    printf("9. Presidente de la republica\n");
    printf("10. Sueldo semanal\n");
    printf("[]===========================================[]\n");
    getch();
    switch (selectOption) {
        case 1:
            costoDeLapices();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
    }
}

void costoDeLapices() {
    int cantidadLapices;
    float precioTotal;

    printf("Introducir la cantidad de lapices a pagar: ");
    scanf(cantidadLapices);

    if (cantidadLapices >= 1000) {
        precioTotal = cantidadLapices * 0.85;
    } else {
        precioTotal = cantidadLapices * 0.90;
    }
    printf("El total a pagar por ", cantidadLapices, " lapices es: ", precioTotal);
}

