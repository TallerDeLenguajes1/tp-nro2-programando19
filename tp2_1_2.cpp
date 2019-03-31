#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 4 // FILAS
#define M 5 // COLUMNAS

int main(){
	int f,c; 
	double mt[N][M] = {{1.0,2.0,3.0,4.0,5.0},{2.30,6.32,5.2145,9.2541,6.321},{2,3,8,2.8596,23.56,},{2.01,3.20,8.214,6.321,45.21}}; 
    double *punt_matriz;
    punt_matriz=&mt[0][0]; //  es lo mismo que:  punt_matriz=&mt[0][0];

    printf("\n\t\t****CODIGO QUE ACCEDE A LOS ELEMENTOS DE UNA MATRIZ****\n\n");
    printf("\t\t\t**** CON ARITMETICA DE PUNTEROS ****\n\n");
    printf("\t\t\t**** Contiene Elementos de Prueba ****\n\n");

    for(f = 0;f<N; f++){       
    	for(c = 0;c<M; c++){ 
    	    printf(" | posicion[%d][%d]=%.2lf ",f+1,c+1, (*(punt_matriz++)));    
    	}   
    printf("\n\n"); 
    } 

	return 0;
}