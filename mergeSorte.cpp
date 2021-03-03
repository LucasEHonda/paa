#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 100000
#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

void merge(int *V, int inicio, int meio, int fim){

    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0;
    int fim2 =0;

    tamanho = fim-inicio+1;

    p1 = inicio;
    p2 = meio+1;

    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for (int i = 0; i < tamanho; ++i){
            if(!fim1 && !fim2){
                if(V[p1] < V[p2])
                    temp[i] = V[p1++];
               else
                    temp[i] = V[p2++];

                if (p1>meio) fim=1;
                if (p2>fim) fim2=1;
            }else{
                if(!fim1)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
            }
        }
        for (int j = 0,k=inicio; j < tamanho; j++,k++)
            V[k]=temp[j];
    }
    free(temp);
}

void mergeSort(int *V, int inicio, int fim){
    int meio;
    if (inicio<fim)
    {
        meio = (floor(inicio+fim)/2);
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim);
        merge(V, inicio, meio,fim);
    }
}

int main() {
    string rawInput;
    vector<int> vetor;
    char* token;
    int aux =0;

    getline(cin, rawInput);
    token = strtok((char*) rawInput.c_str(), " ");

    while (token != NULL) {
        vetor.push_back(atoi(token));
        aux = aux + 1;
        token = strtok(NULL, " ");
    }
    int c[aux];
    //cout<<"sua lista"<<endl;
    for (int i = 0; i < aux; ++i){
        c[i] = vetor[i];
        //cout << vetor[i]<<endl;
        //cout << c[i]<<endl;
    }
    
    mergeSort(c,0,(aux-1));
    for (int k = 0; k < aux; k++) {
        printf("%d ", c[k]);
        
    }
   	printf("\n");
    return 0;
}