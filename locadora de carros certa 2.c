#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
# define E 200
#define valor_diaria 0.005
#define seguro 0.003


int main() {
 setlocale(LC_ALL, "");
   int op,cpf,status,telefone_cliente,diarias=0;
   char nome_cliente[E],nome_do_carro[E],modelo[E],email[E];

   float total,valor_carro;
    do {
        printf("1- Receber dados do usuario\n");
        printf("2- Receber dados do carro que quer ser alugado\n");
        printf("3- verificar situaçao do carro\n");
        printf("4- verificar detalhes financeiros\n");
        printf("5- mostrar o documento para verificaçao de dados\n");
        printf("0- Para finalizar\n\n");
        printf("--> ");

        scanf("%d", &op);

        system("cls ");

        switch(op){
            //Recebendo dados do cliente
            case 1:
                printf("Digite o nome do cliente: \n");
                scanf("%s",&nome_cliente);
                printf("Digite o email do cliente: \n");
                scanf("%s",&email);
                printf("Digite o cpf do cliente: \n");
                scanf("%d", &cpf);
                printf("Digite o numero do cliente\n");
                scanf("%d",&telefone_cliente);

             break;
            //Recebendo dados do carro que quer ser alugado
            case 2:
                printf("Digite o nome do carro \n");
                scanf("%s",&nome_do_carro);
                printf("Digite o modelo do carro(hatch ou sedan) \n");
                scanf("%s",&modelo);
                printf("Digite o valor do carro \n");
                scanf("%f",&valor_carro);

                break;
            //Verificar situaçao do carro
            case 3:
                printf("Verificar o status do carro(1=disponivel/2=indisponivel)\n");
                scanf("%d",&status);
                if(status=1){
                    printf("Carro disponivel\n");
                }
                else{
                    printf("indisponivel");
                }
              break;
            //Verificar detalhes financeiros
            case 4:

                printf("O valor da diaria é: %.2f\n",valor_diaria*valor_carro);
                printf("O valor do seguro é: %.2f\n",seguro*valor_carro);
           valor_diaria*valor_carro + seguro*valor_carro
                printf("digite a quantidade de dias de locaçao do carro\n");
                scanf("%d",&diarias);
                printf("O valor total da locaçao do carro é: %.2f\n",( (valor_diaria*valor_carro)*diarias + seguro*valor_carro);

                break;
                //conferindo dados
            case 5:
                printf("Conferindo documentos\n");
                printf("nome = %s\n",nome_cliente);
                printf("email = %s\n",email);
                printf("cpf= %d\n",cpf);
                printf("telefone = %d\n",telefone_cliente);
                printf("nome do carro  = %s\n",nome_do_carro);
                printf("modelo do carro = %s\n",modelo);
                printf("valor do carro = %.2f\n",valor_carro);
                printf("status do carro(1=Disponivel/2=Indisponivel) = %d\n",status);
                printf("valor da diaria = %.2f\n",valor_diaria);
                printf("valor do seguro = %.2f\n",seguro);
                printf("valor total do aluguel = %.2f\n",);
             break;
             default:
                if(op != 0) printf("Digite uma opcao valida!\n\n");
        }
    }while(op != 0);








    return 0;
}
