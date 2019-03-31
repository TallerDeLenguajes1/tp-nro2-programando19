#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define N 15

int main(){
    
    printf("\n\t\t****MATRIZ Y VECTOR DINAMICOS****\n\n");
    //por cada ejecucion las columnas y los datos de cada celda de la matriz, se refrezcan aleatoriamente
   
    srand(time(NULL));
    int **mt, *vec_pares, f=15, c, pares=0, total_par_fila=0,k, j;
    mt=(int **) malloc (f * sizeof(int));

    vec_pares=(int *) malloc (f * sizeof(int));
    
    for(f=0; f<15; f++){
         k=rand()%11+5;
        *(mt+f)=(int*)malloc(k*sizeof(int)); 
        for(c=0; c<=k;c++){
             *(*(mt+f)+c)=rand()%900+100;
             printf(" %d ", *(*(mt+f)+c));
             if((*(*(mt+f)+c))%2==0){
                 pares++;
             }
        total_par_fila=pares;
        *(vec_pares+f)=total_par_fila;
        
        }
    pares=0;
    printf(" \tPares = %d ", total_par_fila);

    total_par_fila=0;
    printf("\n");
        
    }
    
    printf("\n Total de Numeros pares por fila : ");
    for (int i = 0; i < 15; i++){
        printf("  %d |", *(vec_pares++));
    }
    printf("\n");
   
    free(vec_pares);
    free(mt);
    

  return 0;
}