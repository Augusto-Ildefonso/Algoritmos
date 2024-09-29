// Este algoritmo usa o último elemento como pivô e utiliza a partição de lomuto
#include "quick-sort.h"
#include <stdio.h>

void quick_sort_last_pivot_lomuto(int vet[], int ini, int fim){    
    int pivot = fim-1;
    int i = ini - 1, aux, j;

    if(ini < fim){
        // Partição
        for(j = ini; j < pivot; j++){
            if(vet[j] < vet[pivot]){
                i++;
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux; 
            }
        }

        aux = vet[i+1];
        vet[i+1] = vet[pivot];
        vet[pivot] = aux;

        quick_sort_last_pivot_lomuto(vet, ini, i+1); // Números a esquerda
        quick_sort_last_pivot_lomuto(vet, i + 2, fim); // Números a direita
    }

    return;
}