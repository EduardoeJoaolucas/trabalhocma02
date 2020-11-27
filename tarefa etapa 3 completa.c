#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
# define E 200
 typedef struct {
 int cpf;
 int telefone;
 } Dados;
  void menu();

int main()
{
    setlocale(LC_ALL, "");
    Dados cliente;
   int status;
   char nome_cliente[E],nome_do_carro[E],modelo[E],email[E];
   float total,valor_diaria=0.005;
   float seguro=0.003;
   float valor_carro,diarias;
    int op;
    do{
        menu();
        scanf("%d",&op);
  system("cls ");

        switch(op){
            //Recebendo dados do cliente
            case 1:
                printf("Digite o nome do cliente: \n");

                fflush(stdin);
                fgets(nome_cliente,200,stdin);
                printf("Digite o email do cliente: \n");
                fgets(email,200,stdin);
                printf("Digite o cpf do cliente: \n");
                scanf("%d",&cliente.cpf);
                printf("Digite o numero do cliente\n");
                scanf("%d",&cliente.telefone);

             break;
            //Recebendo dados do carro que quer ser alugado
            case 2:
                printf("Digite o nome do carro \n");
                fflush(stdin);
                fgets(nome_do_carro, 200 , stdin);
                printf("Digite o modelo do carro(hatch,sedan,outros) \n");
                fgets(modelo,200,stdin);
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
                printf("digite a quantidade de dias de locaçao do carro\n");
                scanf("%f",&diarias);
                printf("O valor total da locaçao do carro é: %.2f\n",((valor_diaria*valor_carro)*diarias)+seguro*valor_carro);

                break;
                //conferindo dados
            case 5:
                printf("Conferindo documentos\n");
                printf("nome = %s\n",nome_cliente);
                printf("email = %s\n",email);
                printf("cpf= %d\n",cliente.cpf);
                printf("telefone = %d\n",cliente.telefone);
                printf("nome do carro  = %s\n",nome_do_carro);
                printf("modelo do carro = %s\n",modelo);
                printf("valor do carro = %.2f\n",valor_carro);
                printf("status do carro(1=Disponivel/2=Indisponivel) = %d\n",status);
                printf("valor da diaria = %.2f\n",valor_diaria*valor_carro);
                printf("valor do seguro = %.2f\n",seguro*valor_carro);
                printf("valor total do aluguel = %.2f\n",(((valor_diaria*valor_carro)*diarias)+seguro*valor_carro));
             break;
             default:
                if(op != 0) printf("Digite uma opcao valida!\n\n");
        }

    }while (op != 0);



    return 0;
}

void menu(){
 printf("1- Receber dados do usuario\n");
        printf("2- Receber dados do carro que quer ser alugado\n");
        printf("3- verificar situaçao do carro\n");
        printf("4- verificar detalhes financeiros\n");
        printf("5- mostrar o documento para verificaçao de dados\n");
        printf("0- Para finalizar\n\n");
        printf("--> ");
}
