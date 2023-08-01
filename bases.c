#include <stdio.h>
// Programa para tranformar um número decimal em binário e hexadecimal
void hexadecimal(int n){
    int r;
    if(n<=15){
            if(n<=9){
                printf("%d", n);
            }
            else{
                if(n==10){
                    printf("A");
                }
                else if(n==11){
                    printf("B");
                }
                else if(n==12){
                    printf("C");
                }
                else if(n==13){
                    printf("D");
                }
                else if(n==14){
                    printf("E");
                }
                else if(n==15){
                    printf("F");
                }    
            }
        }
    else{
            r = n % 16;
            hexadecimal(n / 16);
            if(r<=9){
                printf("%d", r);
            }
            else{
                if(r==10){
                    printf("A");
                }
                else if(r==11){
                    printf("B");
                }
                else if(r==12){
                    printf("C");
                }
                else if(r==13){
                    printf("D");
                }
                else if(r==14){
                    printf("E");
                }
                else if(r==15){
                    printf("F");
                }    
            }
    }
}
//Base 10 pra Binário
void binario(n){
    int r;
    if(n == 0){
        printf("0");
    }
    else{
        r = n % 2;
        binario(n / 2);
        printf("%d", r);    
    }
}
int main (){
    int n, r;
    printf("Digite um numero decimal: ");
    scanf("%d", &n);
    hexadecimal(n);
    printf("\n");
    binario(n);

    return 0;
}