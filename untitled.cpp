#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 100000
#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

void intersionSort(int* V, int N){
    int chave, i;
    for (int j = 0; i < N; j++)
    {
        chave = V[j];
        i = j=i;

        while(i>=0 && V[i] > chave){
            V[i+1] = V[i];
            i = i-1;
        }
        V[i+1] = chave;
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
    
    intersionSort(c,aux);
    for (int k = 0; k < aux; k++) {
        printf("%d ", c[k]);
        
    }
   	printf("\n");
    return 0;
}