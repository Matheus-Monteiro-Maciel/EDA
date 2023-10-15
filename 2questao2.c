#include "questao2.h"
#include <stdio.h>
#include <stdlib.h>


Tcliente* criaCliente(unsigned int codigo, char nome[41], int idade, float salario, char rua[101], char bairro[41], unsigned int cep){
    Tcliente *p = NULL;

    p = (Tcliente*) malloc( sizeof(Tcliente));

    p->codigo = codigo;
    p->nome = nome;
    p->idade = idade;
    p->salario = salario;
    p->rua = rua;
    p->bairro = bairro;
    p->cep = cep;
    return p;
}


void imprimeCliente (Tcliente* p){
    if( enderecoValido(p) ) {
        printf("\nCodigo: %u", p->codigo);
        printf("\nNome: %s", p->nome);
        printf("\nIdade: %d", p->idade);
        printf("\nSalario: R$ %.3f", p->salario);
        printf("\nRua: %s", p->rua);
        printf("\nBairro: %s", p->bairro);
        printf("\nCep: %u\n\n", p->cep);
    } else {
        printf( "Nao ha dados a serem impressos. O cliente nao existe" );
    }
} 


int enderecoValido( Tcliente *p ){ return p != NULL; }


void limpar_buffer(void) {
    int c;
    while( (c = getchar() ) != '\n' && c != EOF);
}


void liberaCliente(Tcliente *p) { if (p != NULL) free(p); }
