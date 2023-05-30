#include <stdio.h>

int calcular_determinante(int matriz[3][3]) {
    int det;
    
    det = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
          (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
          (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
          (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
          (matriz[0][1] * matriz[1][0] * matriz[2][2]) -
          (matriz[0][0] * matriz[1][2] * matriz[2][1]);
    
    return det;
}

void calcular_posiciones(int matriz[3][3], int vector[3]) {
    int det_matriz = calcular_determinante(matriz);
    
    if (det_matriz == 0) {
        printf("El sistema de ecuaciones no tiene solución única.\n");
        return;
    }
    
    int det_x[3][3] = {
        {vector[0], matriz[0][1], matriz[0][2]},
        {vector[1], matriz[1][1], matriz[1][2]},
        {vector[2], matriz[2][1], matriz[2][2]}
    };
    
    int det_y[3][3] = {
        {matriz[0][0], vector[0], matriz[0][2]},
        {matriz[1][0], vector[1], matriz[1][2]},
        {matriz[2][0], vector[2], matriz[2][2]}
    };
    
    int det_z[3][3] = {
        {matriz[0][0], matriz[0][1], vector[0]},
        {matriz[1][0], matriz[1][1], vector[1]},
        {matriz[2][0], matriz[2][1], vector[2]}
    };
    
    int det_x_val = calcular_determinante(det_x);
    int det_y_val = calcular_determinante(det_y);
    int det_z_val = calcular_determinante(det_z);
    
    int x = det_x_val / det_matriz;
    int y = det_y_val / det_matriz;
    int z = det_z_val / det_matriz;
    
    printf("Las posiciones son:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
}

int main() {
    int matriz[3][3];
    int vector[3];
    
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vector[i]);
    }
    
    int determinante = calcular_determinante(matriz);
    
    printf("La determinante de la matriz es: %d\n", determinante);
    
    calcular_posiciones(matriz, vector);
    
    return 0;
}