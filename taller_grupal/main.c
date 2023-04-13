#include <stdio.h>

int main (int argc, char *argv[]) {

    float Total=0, Totald=0;
    float Cantidad1=0, Cantidad2=0, Cantidad3=0, Cantidad4=0, Cantidad5=0;
    float P1=150, P2=55, P3=180, P4=70, P5=120;
    float St1=0, St2=0, St3=0, St4=0, St5=0;

    char Nombre [50];
    char Cedula [20];
    char opcion;
    float SN;

    SN = 1;

    do
    {
        printf ("****************ELIJA UN PRODUCTO***************** \n");
        printf("a) Llantas (Precio: $150) \n");
        printf("b) Kit Pastillas de freno (Precio: $55) \n");
        printf("c) Kit de embrague (Precio: $180)\n");
        printf("d) Faro (Precio: $70)\n");
        printf("e) Radiador (Precio: $120)\n");

        printf("Ingrese la letra del producto  factutar :\n ");
        fflush(stdin);
        scanf("%c", &opcion);

        switch (opcion){
        case 'a':
            printf ( " Ingrese la cantidad de llantas:\n ");
            scanf ("%f", &Cantidad1); 

            break;

        case 'b':
            printf ( " Ingrese la cantidad de kit pastillas de freno:\n ");  
            scanf ("%f", &Cantidad2); 

            break;

        case 'c':
            printf ( " Ingrese la cantidad de kit de embrage:\n ");
            scanf ("%f", &Cantidad3); 

            break;

        case 'd':
            printf ( " Ingrese la cantidad de faro:\n ");
            scanf ("%f", &Cantidad4); 

            break;

        case 'e':
            printf ( " Ingrese la cantidad de radiador:\n ");
            scanf ("%f", &Cantidad5); 

            break;

        default:
            break;
        }

        St1 = Cantidad1 * P1;
        St2 = Cantidad2 * P2;
        St3 = Cantidad3 * P3;
        St4 = Cantidad4 * P4;
        St5 = Cantidad5 * P5;

        Total = St1 + St2+ St3+ St4+ St5;

        if (Total >= 101 && Total <=501 ){
            Totald = Total * 0.95;

        }else if (Total >= 501 && Total > 100){
            Totald = Total * 0.93;
        }else if (Total > 1000){
            Totald = Total * 0.90;
        }else{
            Totald = Total;
        }

        printf("Desea incertar otro producto 1: SI  2: NO \n");\
        fflush(stdin);
        scanf("%f", &SN);

    } while (SN != 2 );

    printf ("############Datos de facturacion ########## \n ");

    printf ("Incerte el nombre: \n");
    scanf ("%s",&Nombre);
    printf ("Incerte cedula: \n");
    scanf ("%s",&Cedula);

    printf ( " ************ FACTURA************ \n");
    printf ("Nombre: %s \n", Nombre);
    printf ("Cedula %s \n", Cedula);
    printf ( " PRODUCTO          CANTIDAD        VALOR UNITARIO  \n");

    if (Cantidad1 > 0 ){
        printf (" Llantas       %.0f    %.2f    %.2f\n",Cantidad1, P1, St1);
    }else if (Cantidad2 != 0) {
        printf (" Pastillas     %.0f    %.2f    %.2f\n",Cantidad2, P2, St2);
    }else if (Cantidad3 != 0) {
        printf (" Embrage       %.0f    %.2f    %.2f\n",Cantidad3, P3, St3);
    }else if (Cantidad4 != 0){
        printf (" Faro          %.0f    %.2f    %.2f\n",Cantidad4, P4, St4);
    }else if (Cantidad5 != 0){
        printf (" Radiador      %.0f    %.2f    %.2f\n",Cantidad5, P5, St5);
    }
        
    printf ("El total a pagar es %.2f", Totald);      
    
   

    return 0;
}