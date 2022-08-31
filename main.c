#include<stdio.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

        OP:
        system("cls");
        printf("+------------------------------------------------+\n");
        printf("|                                                |\n");
        printf("|                      MENU                      |\n");
        printf("|                                                |\n");
        printf("+------------------------------------------------+\n");

        printf("Informe uma opção válida e aperte a tecla enter\n\n");
        printf("1. Gestão de TI\n");
        printf("2. Análise d Desenvolvimento de Sistemas\n");
        printf("3. Segurança da Informação\n");
        printf("4. Calcular Média\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                gestaoTI();
                break;

            case 2:
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                segurancaInformacao();
                break;

            case 4:
                calculaMedia();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
                Sleep(2000);
                goto OP;
        }
}

void calculaMedia(){

    EXEC_CALCULA_MEDIA:
    system("cls");

    printf("+------------------------------------------------+\n");
    printf("|                                                |\n");
    printf("|                 CALCULA MÉDIA                  |\n");
    printf("|                                                |\n");
    printf("+------------------------------------------------+\n");

    // declaração de variaveis
  	float nota1;
  	float nota2;
  	float nota3;
  	float nota4;
  	float mediaAnual;
  	float mediaFinal;
  	int menuCalculaMedia = 1;

  	// entrada
  	printf("Digite a nota 1 : ");
	scanf("%f", &nota1);
  	printf("Digite a nota 2 : ");
	scanf("%f", &nota2);
	printf("Digite a nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite a nota 4 : ");
	scanf("%f", &nota4);

  	// processamento
  	mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4 ;

	// criticar para saber se o aluno esta aprovado ou retido
	// saida
    system("cls || clear");
	if (mediaAnual >= 7)
  	{
        printf("+------------------------------------------------+\n");
        printf("|                                                |\n");
        printf("|               ALUNO APROVADO                   |\n");
        printf("|                                                |\n");
        printf("+------------------------------------------------+\n");
    }
  	else
  	{
        printf("+------------------------------------------------+\n");
        printf("|                                                |\n");
        printf("|               ALUNO REPROVADO                  |\n");
        printf("|                                                |\n");
        printf("+------------------------------------------------+\n");
    }

        MENU_DA_MEDIA:
        printf("+------------------------------------------------+\n");
        printf("|                                                |\n");
        printf("|          ESCOLHA UMA OPÇÃO DE RETORNO          |\n");
        printf("|                                                |\n");
        printf("+------------------------------------------------+\n");
        printf("Informe uma opção válida e aperte a tecla enter\n\n");
        printf("1. Calcular Novamente\n");
        printf("0. Voltar\n");

        scanf("%d", &menuCalculaMedia);

        switch(menuCalculaMedia)
        {
            case 1:
                goto EXEC_CALCULA_MEDIA;
                break;

            case 0:
                main();
                break;
            default:
                printf("+------------------------------------------------+\n");
                printf("|                                                |\n");
                printf("|          ESCOLHA UMA OPÇÃO VÁLIDA              |\n");
                printf("|                                                |\n");
                printf("+------------------------------------------------+\n");
                Sleep(2000);
                goto MENU_DA_MEDIA;
        }



}

void gestaoTI()
{
    printf("Gestão de TI é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa. Logo, o gestor de TI é o profissional responsável por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos, otimizando a performance da organização.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar, implementar e realizar a manutenção de sistemas de informação de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n");
}

void sair()
{
    printf("Obrigado por visitar nossa lista de cursos\n");
}
