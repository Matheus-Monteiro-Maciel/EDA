
typedef struct cliente{
    unsigned int codigo;
    char* nome;
    int idade;
    float salario;
    char* rua;
    char* bairro;
    unsigned int cep;
}Tcliente;

Tcliente* criaCliente(unsigned int codigo, char nome[41], int idade, float salario, char rua[101], char bairro[41], unsigned int cep);

int enderecoValido( Tcliente *p );

void limpar_buffer(void);

void imprimeCliente (Tcliente* p);

void liberaCliente(Tcliente *p);
