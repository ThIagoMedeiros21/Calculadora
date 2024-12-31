    #include <stdio.h>

    int soma(int a, int b){
        int sum;
        sum=a+b;
        return sum;
        
    }

    int subtracao(int a, int b){
        int sub;
        sub=a-b;
        return sub;
    }

    int mult(int a, int b){
        int multi;
        multi=a*b;
        return multi;
    }
    
    float divi(int a, int b){ 
    float divisao;
    divisao=(float)a/b; 
    return divisao;
    }

    int main(){
        int option;
        
        printf("SEJA BEM VINDO A SUA CALCULADORA\n DIGITE:\n 1-CALCULADORA SIMPLES\n 2-CALCULADORA DE MED ");
        scanf("%d",&option);
        if(option==1){
            int val1,val2;
            int op;
            
            printf("DIGITE O PRIMEIRO NUMERO: ");
            scanf("%d",&val1);
            printf("DIGITE O SEGUNDO NUMERO: ");
            scanf("%d",&val2);
            printf("DIGITE:\n 1-SOMA\n 2-SUBTRAÇÃO\n 3-MULTIPLICAÇÃO\n 4-DIVISÃO");
            scanf(" %d",&op);
            
            if(op==1){
                printf("%d",soma(val1,val2));
                
            }
            else if(op==2){
                printf("%d",subtracao(val1,val2));
            }
            else if(op==3){
                printf("%d", mult(val1,val2));
            }
            else if (op == 4) {
            if (val2 != 0) {
                printf("RESULTADO: %f\n", divi(val1, val2));
            } else {
                printf("DIVISÃO POR 0\n");
            }
            }
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
    