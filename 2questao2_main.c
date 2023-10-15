#include "questao2.h"
#include <stdio.h>

int main(void){
    
    unsigned int codigo;
    char nome[41];
    int idade;
    float salario;
    char rua[101];
    char bairro[41];
    unsigned int cep;

    printf("Digite o codigo para o cliente: "); scanf("%u", &codigo);
    limpar_buffer();
    printf("\nDigite um nome para o cliente: "); scanf("%40[^\n]", nome);
    limpar_buffer();
    printf("\nDigite a idade do cliente: "); scanf("%d", &idade);
    limpar_buffer();
    printf("\nDigite o salario do cliente: "); scanf("%f", &salario);
    limpar_buffer();
    printf("\nDigite a rua do cliente: "); scanf("%100[^\n]", rua);
    limpar_buffer();
    printf("\nDigite o bairro do cliente: "); scanf("%40[^\n]", bairro);
    limpar_buffer();
    printf("\nDigite o cep do cliente: "); scanf("%u", &cep);
    limpar_buffer();   

    Tcliente * cliente = criaCliente(codigo, nome, idade, salario, rua, bairro, cep);

    if (cliente != NULL) imprimeCliente(cliente);

    liberaCliente(cliente);

    return 0;
}
