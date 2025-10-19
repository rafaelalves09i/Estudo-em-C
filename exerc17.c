#include <stdio.h>
#include <math.h>
#define MAX 1100
#define MIN 700

void crivo_eratostenes(int e_primo[], int limite){
    int i, j;
    // Inicializa todos como "primos"
    for(i = 0; i <= MAX; i++){
        e_primo[i] = 1; // 1 = verdadeiro (todos os números foram colocados como primos para serem checados dps)

    }

    // Os números 0 e 1 não são primos
    e_primo[0] = 0;
    e_primo[1] = 0;

    // Elimina os múltiplos de cada primo (princípio do crivo de Eratostenes)
    for(i =2; i <= sqrt(MAX); i++){
        if(e_primo[i]){
            for (j = i * i; j <= MAX; j += i){
                e_primo[j] = 0;
            }
        }
    }





}

int main(){
    int e_primo[MAX + 1];
    int n, p;

    //Gera tabela de primos até MAX
    crivo_eratostenes(e_primo, MAX);

    //Para cada número par entre MIN e MAX:
    for(n = MIN; n <= MAX; n++){
        if(n % 2 == 0){ // só para pares
            // CONJECTURA DE GOLDBACH (VERIFICA SE HÁ DOIS PRIMOS CUJA SOMA SEJA N)
            for(p = 2; p <= n/2; p++){
                if(e_primo[p] && e_primo[n- p]){
                    printf("%d = %d + %d\n", n, p, n - p);
                    break; // só mostra a primeira combinação

                }

            }
        }
    }

return 0;






}