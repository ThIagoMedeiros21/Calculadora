#include <stdio.h>

int main(){
    int option;
    
    printf("SEJA BEM VINDO A SUA CALCULADORA\n DIGITE:\n 1-CALCULADORA SIMPLES\n 2-CALCULADORA DE MED ");
    scanf("%d",&option);
    if(option==1){
        float resultado;
        int val1,val2;
        char op;

        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%d",&val1);
        printf("DIGITE O SEGUNDO NUMERO: ");
        scanf("%d",&val2);
        printf("DIGITE O SINAL DO OPERADOR(+,-,*,/) ");
        scanf(" %c",&op);
        if(op=='+'){
            resultado=val1+val2;
        }
        else if(op=='-'){
            resultado=val1-val2;
        }
        else if(op=='*'){
            resultado=val1*val2;
        }
        else if(op=='/'){
            if(val2!=0){
                resultado=val1/val2;
            
            }

            else{
                printf("Divisao por 0\n");
            }
        }
        printf("RESULTADO: %f",resultado);

        }

    else if(option==2){
        int n;
        
        printf("DIGITE A QUANTIDADE DE VALORES ");
        scanf("%d",&n);
        int numeros[n];
        float med,soma=0.0;
        for(int i=0;i<n;i++){
            printf("DIGITE OS VALORES ");
            scanf("%d",&numeros[i]);
            
        }

        for(int c=0;c<n;c++){
            soma+=numeros[c];
            med=soma/n;
            
        }

        printf("SUA MEDIA FOI: %f",med);
    
    }
    return 0;

}