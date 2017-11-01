# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <locale.h>

int Fusca = 1;
int Chevette = 1;
int Kombi = 1;
int Belina = 1;
int Brasilia = 1;
int sair = 1;
const int HORA_LOCACAO = 12, LOCACAO = 1, DEVOLUCAO = 0; 

time_t timer;//usada na função resolverDatas
struct tm dLocFusca, dDevFusca, dLocChevette,dDevChevette, dLocKombi, dDevKombi, dLocBelina, dDevBelina, dLocBrasilia, dDevBrasilia;

resolverDatas(struct tm *date1, struct tm *date2, int diasAMais)
    {
    /* essa função recebe as structs e prenche as variáveis
     * para cada locação será necessário chama-la, isso para que as datas 
     * fiquem armazenadas nas variáveis. A princípio as datas estão vazias, 
     * a função que irá parametiza-la.
     * date1 = data de locação 
     * date2 = data de devolução
     * diasAMais = número de dias que o veículos estará em posse do locatário
     */
    
    /*
     CODIGO ORIGINAL
     Fonte: http://cssimplified.com/c-programming/write-a-program-in-c-to-add-the-given-number-of-days-to-the-current-date-and-print-the-final-resultant-date-for-e-g-adding-12-days-to-22082005-will-result-in-03092005-10m-dec2005
     Referência para a criação da função resolveDatas()    
    #include <time.h>
    #include <stdio.h>
    void  main()
    {
        struct tm date = {0} ;
        time_t timer;
        clrscr();
        timer=time(NULL);
        date = *gmtime( &timer ) ;
        //printf("%s",asctime(localtime(&timer)));
        printf("%d/%d/%d\n",date.tm_mday-1,date.tm_mon+1,date.tm_year+1900);
        date.tm_year = date.tm_year;
        date.tm_mon = date.tm_mon;
        date.tm_mday = date.tm_mday + 12;
        timer = mktime( &date ) ;
        date = *gmtime( &timer ) ;
        //printf("%s",asctime(localtime(&timer)));
        printf("%d/%d/%d\n",date.tm_mday-1,date.tm_mon+1,date.tm_year+1900);
        getch();
    }
     */
    
    /*
     * é necessário criar as datas como variáveis globais, para cada 
     * carro haverá datas relacionadas a locação e devolução, para
     * chama-las na função, de qualquer lugar do sistema.
     * struct tm dataLocNomeCarro = {0}, datDevNomeCarro = {0} ;
     * time_t timer;
     * resolverDatas(&dataLocaNomeCarro, &dataDevNomeCarro, dias);
     */
    timer=time(NULL);
    (*date1) = *gmtime( &timer ) ;//essa é a primeira data, a data de locação, preenchida a partir do sistema
    printf("\t Data Locação: \t\t%02d/%02d/%d\n",(*date1).tm_mday,(*date1).tm_mon+1,(*date1).tm_year+1900);
    (*date2).tm_year = (*date1).tm_year;
    (*date2).tm_mon = (*date1).tm_mon;
    (*date2).tm_mday = (*date1).tm_mday + diasAMais;
    timer = mktime( (*&date2) ) ;
    (*date2) = *gmtime( &timer ) ;
    printf("\t Data Devolução: \t%02d/%02d/%d\n\n",(*date2).tm_mday,(*date2).tm_mon+1,(*date2).tm_year+1900);
    /*
     * Na função main() usar :
     * printf("Data Locação: %d/%d/%d\n",dataLocaNomeCarro.tm_mday-1,dataLocaNomeCarro.tm_mon+1,dataLocaNomeCarro.tm_year+1900);
     * printf("Data Devolução: %d/%d/%d\n",dataDevNomeCarro.tm_mday-1,dataDevNomeCarro.tm_mon+1,dataDevNomeCarro.tm_year+1900);
     */
    }

void logoLegalRentACar()
    {
    
         system ("cls");
         printf ("\t=============================================================\n");
         printf ("\t======================LEGAL RENT A CAR=======================\n");
         printf ("\t=============================================================\n\n");
    }

void printCatalogo()
{
         logoLegalRentACar();

         printf ("\t CARROS DISPONÍVEIS PARA LOCAÇÃO:  \n\n");
         if (Fusca == 1){printf ("\t Fusca  \n");}
         if (Chevette == 1){printf ("\t Chevette  \n");}
         if (Kombi == 1){printf ("\t Kombi  \n");}
         if (Belina == 1){printf ("\t Belina  \n");}
         if (Brasilia == 1){printf ("\t Brasilia  \n");}
         printf ("\n\n");
         
         printf ("\t CARROS NÃO DISPONÍVEIS | DATA DE LOC | PREVISÃO DE ENTREGA:  \n\n");
         if (Fusca == 0){printf ("\t Fusca  \t\t  %02d/%02d/%d\t%02d/%02d/%d às %d:00h\n",dLocFusca.tm_mday,dLocFusca.tm_mon+1,dLocFusca.tm_year+1900, dDevFusca.tm_mday,dDevFusca.tm_mon+1,dDevFusca.tm_year+1900, HORA_LOCACAO);}
         if (Chevette == 0){printf ("\t Chevette    \t\t  %02d/%02d/%d\t%02d/%02d/%d às %d:00h\n",dLocChevette.tm_mday,dLocChevette.tm_mon+1,dLocChevette.tm_year+1900, dDevChevette.tm_mday,dDevChevette.tm_mon+1,dDevChevette.tm_year+1900, HORA_LOCACAO);}
         if (Kombi == 0){printf ("\t Kombi   \t\t  %02d/%02d/%d\t%02d/%02d/%d às %d:00h\n",dLocKombi.tm_mday,dLocKombi.tm_mon+1,dLocKombi.tm_year+1900, dDevKombi.tm_mday,dDevKombi.tm_mon+1,dDevKombi.tm_year+1900, HORA_LOCACAO);}
         if (Belina == 0){printf ("\t Belina  \t\t  %02d/%02d/%d\t%02d/%02d/%d às %d:00h\n",dLocBelina.tm_mday,dLocBelina.tm_mon+1,dLocBelina.tm_year+1900, dDevBelina.tm_mday,dDevBelina.tm_mon+1,dDevBelina.tm_year+1900, HORA_LOCACAO);}
         if (Brasilia == 0){printf ("\t Brasilia    \t\t  %02d/%02d/%d\t%02d/%02d/%d às %d:00h\n",dLocBrasilia.tm_mday,dLocBrasilia.tm_mon+1,dLocBrasilia.tm_year+1900, dDevFusca.tm_mday,dDevBrasilia.tm_mon+1,dDevBrasilia.tm_year+1900, HORA_LOCACAO);}
         printf ("\n\n");

}
int printMenuPrincipal() //imprime o menu principal e retorna a opção escolhida
{
         logoLegalRentACar();

         printf ("\t (1) Consultar Veículos Disponíveis\n");
         printf ("\t (2) Alugar Veículo\n");
         printf ("\t (3) Devolver Veículo\n");
         printf ("\t (0) Sair\n\n");
         
         int x;
         scanf("%i", &x);
         if(x<0 ||x>3)
            {
                system ("cls");
                printf ("\n\nValor inválido. Por gentileza, digite um valor válido:\n\n");
                printMenuPrincipal();
            }
         return x;
}
int printMenuLocacao() //imprime as opções de veículos
{
         logoLegalRentACar();
         
         printf ("\t Selecione o veículo:  \n\n");
         printf ("\t (1) Fusca  \n");
         printf ("\t (2) Chevette    \n");
         printf ("\t (3) Kombi    \n");
         printf ("\t (4) Belina  \n");
         printf ("\t (5) Brasilia    \n");
         printf ("\t (0) Sair    \n");
         
         int x;
         scanf("%i", &x);
         if(x<0 ||x>5)
            {
                system ("cls");
                printf ("\t Valor inválido. Por gentileza, digite um valor válido:\n\n");
                printMenuLocacao();
            }         
         return x;
}

void printTicket(float valor, struct tm *dataLocacao, struct tm *dataDevolucao){
    
    //printf("\t FUNÇÃO +++ TICKET +++  SENDO IMPLEMENTADA.\n\n");
    
    printf("\t======================TICKET DO CLIENTE======================\n");
    printf("\t VALOR DA LOCAÇÃO:\t\t R$ %.2f\n",valor);
    printf("\t DATA LOCAÇAO:\t\t\t %02d/%02d/%d às %d:00h\n",(*dataLocacao).tm_mday,(*dataLocacao).tm_mon+1,(*dataLocacao).tm_year+1900, HORA_LOCACAO);    
    printf("\t DATA DEVOLUÇÃO:\t\t %02d/%02d/%d às %d:00h\n",(*dataDevolucao).tm_mday,(*dataDevolucao).tm_mon+1,(*dataDevolucao).tm_year+1900, HORA_LOCACAO);   
    printf("\t=================REIMPRESSÃO NAO DISPONÍVEL==================\n\n");
   
}

void verificarAtrasoDevolucao(int valorDiaria )
{
    int aux;
    float multa;
    printf("\n\t Horas de atraso na entrega(se não houve atraso digite 0):\n\n");
    scanf("%d", &aux);
    if(aux > 0)
        {
            multa = aux * (valorDiaria/24);
            printf("\t MULTA POR ATRASO: R$ %.2f\n\n", multa);
        }else if(aux == 0)
            {
                printf("\t NÃO HÁ MULTAS A PAGAR.\n\n");
            }
}

int verificaDiariaGratis(int x){
	int opcao;
	if(x >= 5){
		printf("Deseja utilizar uma diaria de cortesia? 1 para sim, outro valor para nao");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			
			x = x + 1;
		}
	}
	
	return x;
}
void locacaoFusca()
{
float valorLocacao;
int qtdDias, x, teste;
 
                   logoLegalRentACar();                   
                   printf ("\t Modelo Escolhido: Fusca.        \n");
                   printf ("\t Valor da diaria: R$ 240,00                  \n");//10,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%d",&qtdDias);
                   
                   valorLocacao = 240 * qtdDias;
                   
                   printf ("\t Valor da locação : R$%.2f \n\n",valorLocacao );
                   
                   verificarDesconto(&valorLocacao);
                   
                   qtdDias = verificaDiariaGratis(qtdDias);
                   
                   resolverDatas(&dLocFusca, &dDevFusca, qtdDias);
                   
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
     
                   scanf ("%f",&x);
                   
                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Fusca=0;
                        system("cls");
                        logoLegalRentACar();
                        printf ("\t LOCAÇÃO CONFIRMADA. \n\n"
                                "\t Modelo Escolhido: Fusca.\n\n");
                        
                                          
                        printTicket(valorLocacao, &dLocFusca, &dDevFusca);

                   }
                   else if (x == 2)
                   {
                        system("cls");
                        logoLegalRentACar();
                        printf ("\t LOCAÇÃO CANCELADA!\n\n");
                   }

}

void devolucaoFusca()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t MODELO EM DEVOLUÇÃO: Fusca.        \n");
                   
                   verificarAtrasoDevolucao(240);// valor da diária: R$ 240,00
               
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");

                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Fusca=1;
                        printf ("\t DEVOLUÇÃO CONFIRMADA. OBRIGADO. \n\n");
                   }
                   else if (x == 2)
                   {
                        printf ("\t DEVOLUÇÃO CANCELADA!\n\n");
                   }

 }

void locacaoChevette()
{
float valorLocacao;
int qtdDias, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: Chevette.   \n");
                   printf ("\t Valor da diaria: R$ 240,00          \n");//10,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f", &qtdDias);
	
                   valorLocacao = 240 * qtdDias;
                                  
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   
                   verificarDesconto(&valorLocacao);
	
		   qtdDias = verificaDiariaGratis(qtdDias);
	
                   resolverDatas(&dLocChevette, &dDevChevette, qtdDias);
                   
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                  
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Chevette=0;
                        printf ("\t LOCAÇÃO CONFIRMADA. \n\n"
                                "\t Modelo Escolhido: Chevette.\n\n");
                        
                        printTicket(valorLocacao, &dLocChevette, &dDevChevette);
                      
                   }
                   else if (x == 2)
                   {
                        printf ("\t LOCAÇÃO CANCELADA!\n\n");
                   }

}

void devolucaoChevette()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t MODELO EM DEVOLUÇÃO: Chevette.          \n");

                   verificarAtrasoDevolucao(240);// valor da diária: R$ 240,00
                   
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");

                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Chevette=1;
                        printf ("\t DEVOLUÇÃO CONFIRMADA. \n\n");
 
                   }
                   else if (x == 2)
                   {
                        printf ("\t DEVOLUÇÃO CANCELADA!\n\n");

                   }

 }


void locacaoKombi()
{
float valorLocacao;
int qtdDias;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: Kombi.\n");
                   printf ("\t Valor da diaria: R$ 240,00    \n"); //10,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f", &qtdDias);
                
                   valorLocacao = 240 * qtdDias;             
                   
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   
                   verificarDesconto(&valorLocacao);
	
                   qtdDias = verificaDiariaGratis(qtdDias);
	
                   resolverDatas(&dLocKombi, &dDevKombi, qtdDias);
                   
                   printf ("\t Para confirmar digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);
                   
                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Kombi=0;
                        printf ("\t LOCAÇÃO CONFIRMADA. \n"
                                "\t Modelo Escolhido: Kombi.\n\n");
                        
                        printTicket(valorLocacao, &dLocKombi, &dDevKombi);

                   }
                   else if (x == 2)
                   {
                        printf ("\t LOCAÇÃO CANCELADA!\n");
                        
                   }

 }

void devolucaoKombi()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t MODELO EM DEVOLUÇÃO: Kombi.\n");
                   
                   verificarAtrasoDevolucao(240);// valor da diária: R$ 240,00

                   printf ("\t Para confirmar digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Kombi=1;
                        printf ("\t DEVOLUÇÃO CONFIRMADA. \n");
             
                   }
                   else if (x == 2)
                   {
                        printf ("\t DEVOLUÇÃO CANCELADA!\n");
                    
                   }
 
 }



void locacaoBelina()
{
float valorLocacao;
int qtdDias;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: Belina.        \n");
                   printf ("\t Valor da diaria: R$ 240,00               \n");// 10,00 hr
                   printf ("\t Digite a quantidade de dias de locação:     \n");
                   scanf ("%f", &qtdDias);               
                   
                   valorLocacao = 240 * qtdDias;
                   
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   
                   verificarDesconto(&valorLocacao);
	
                   qtdDias = verificaDiariaGratis(qtdDias);
	
	           resolverDatas(&dLocBelina, &dDevBelina, qtdDias);
                   
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);
                   
                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Belina=0;
                        printf ("\t LOCAÇÃO CONFIRMADA. \n\n"
                                "\t Modelo Escolhido: Belina.\n\n");
                        
                        printTicket(valorLocacao, &dLocBelina, &dDevBelina);

                   }
                   else if (x == 2)
                   {
                        printf ("\t LOCAÇÃO CANCELADA!\n\n");
                   }

 }


void devolucaoBelina()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t MODELO EM DEVOLUÇÃO: Belina.        \n");
                   
                   verificarAtrasoDevolucao(240);// valor da diária: R$ 240,00
                  
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Belina=1;
                        printf ("\t DEVOLUÇÃO CONFIRMADA. \n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t DEVOLUÇÃO CANCELADA!\n\n");
                   }

 }


void locacaoBrasilia()
{
float valorLocacao;
int qtdDias, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: Brasilia.       \n");                   
                   printf ("\t Valor da diaria: R$ 240,00              \n");// 10,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f", &qtdDias);
                             
                   valorLocacao = 240 * qtdDias;
                   
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   
                   verificarDesconto(&valorLocacao);
	
                   qtdDias = verificaDiariaGratis(qtdDias);
	
                   resolverDatas(&dLocBrasilia, &dDevBrasilia, qtdDias);
                   
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);
                   
                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Brasilia=0;
                        printf ("\t LOCAÇÃO CONFIRMADA.\n\n"
                                "\t Modelo Escolhido: Brasilia.\n\n");
                        
                        printTicket(valorLocacao, &dLocBrasilia, &dDevBrasilia);


                   }
                   else if (x == 2)
                   {
                        printf ("\t LOCAÇÃO CANCELADA!\n\n");
                   }

}

void devolucaoBrasilia()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t MODELO EM DEVOLUÇÃO: Brasilia         \n");
                   
                   verificarAtrasoDevolucao(240);// valor da diária: R$ 240,00
                                  
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois((int)x);

                   if(x == 1)
                   {
                        Brasilia=1;
                        printf ("\t DEVOLUÇÃO CONFIRMADA.\n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t DEVOLUÇÃO CANCELADA!\n\n");
                   }

}

void alugarVeiculo(int menuItem)
{
    
    int aux = verificarStatusVeiculo(menuItem, LOCACAO);
    
    switch(aux)
    {
        case 1:            
            locacaoFusca();
            break;
        case 2:
            locacaoChevette();
            break;
        case 3:
            
            locacaoKombi();
            break;
        case 4:
            locacaoBelina();
            break;
        case 5:
            locacaoBrasilia();
            break;
    }
}

void devolverVeiculo(int menuItem)
{
    int aux = verificarStatusVeiculo(menuItem, DEVOLUCAO);

    switch(aux)
    {
        case 1:
            devolucaoFusca();
            break;
        case 2:
            devolucaoChevette();
            break;
        case 3:
            devolucaoKombi();
            break;
        case 4:
            devolucaoBelina();
            break;
        case 5:
            devolucaoBrasilia();
            break;
    }
    
}

void escolhaMenuPrincipal(int escolha)
{
   switch(escolha)
   {
       case 1:
           printCatalogo();
           break;
       case 2:
           alugarVeiculo(printMenuLocacao());                
           //alugarVeiculo();                
           break;           
       case 3:
           devolverVeiculo(printMenuLocacao());
           //devolverVeiculo();
           break;
       case 0:
           //sair             
           break;
   }  
}

int verificaEntradaUmOuDois(int valor)
{
    if (valor<1)
        {
            printf("\t Por gentileza, digite 1 ou 2.\n");
            scanf("%i", &valor);
            verificaEntradaUmOuDois(valor);//scanf("%i", &valor);

        }else if(valor>2)
        {
            printf("\t Por gentileza, digite 1 ou 2.\n");
            scanf("%i", &valor);
            verificaEntradaUmOuDois(valor);//scanf("%i", &valor);
                       
        }else
            
    return valor;
}

int verificarStatusVeiculo(int idMenu, int evento)//carro = nome do veículo; evento = Locação "1", Devolução "0"
{
    int carro;
    
    int aux = idMenu;
    
    switch(idMenu)
    {
        case 1:
            carro = Fusca;
            break;
        case 2:
            carro = Chevette;
            break;
        case 3:
            carro = Kombi;
            break;
        case 4:
            carro = Belina;
            break;
        case 5:  
            carro = Brasilia;
            break;
    }
    
    if(evento == 1)
    {
        switch(carro)
        {
            case 0:
                printf("\t VEÍCULO INDISPONÍVEL/ALUGADO.\n\n"
                        "\t LOCAÇÃO NÃO PODE SER FINALIZADA\n\n");
                                               
                aux = 0;
                break;
        }
    }
    if(evento == 0)
    {
        switch(carro)
        {
            case 1:
                printf("\t VEÍCULO NÃO ESTÁ ALUGADO.\n\n"
                        "\t DEVOLUÇÃO NÃO PODE SER FINALIZADA\n\n");
                aux = 0;
                break;
        }
    }
    
    return aux;
}

int verificarSair(int x ){
    
    if (x == 1)
        {
            return x;
        }else
        {
            //logoLegalRentACar();            
            
            printf ("\n\n\n");
            printf ("\t=============================================================\n");
            printf ("\t=====================PROGRAMA FINALIZADO=====================\n");
            printf ("\t=============================================================\n\n");
            printf ("\n\n\n");
            return 0;
    }
       
}

void verificarDesconto(float *valor)
{    
    int x;
    printf("\t APLICAR DESCONTO.\n");
    printf("\t (1)Idoso.\n");
    printf("\t (2)Empresa parceira.\n");
    printf("\t (0)Sem desconto.\n");

    scanf("%i", &x);
    
    while (x<0 || x>2)
        {
            printf("\t\t Por gentileza, digite 1, 2 ou 0.\n\n");
            scanf("%i", &x);
            //verificarDesconto(valor);//scanf("%i", &valor);
        }
        if (x == 1)
        {
            printf("\t Valor da locação com 10%% de Desconto: R$%.2f\n\n", *valor*0.9);
            *valor = *valor*0.9;

        }else if (x == 2)
        {
            printf("\t Valor da locação com 5%% de Desconto: R$%.2f\n\n", *valor*0.95);
            *valor = *valor*0.95;
        }else if (x == 0)
        {
            *valor = *valor*1.0;
        }
    //return valor;
}

//+++++++++++++++++++++++++++++++++++


void main ()
{
	//Utiliza?o de acentos e caracteres da lingua portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
do{
        int menuItem;
        
        //printCatalogo(); teste printCatalogo();
/* código para teste da funçao verificaDesconto();   
 * COM ESSE COMENTÁRIO A FUNÇÃO ESTÁ SENDO 
 * TESTADA EM locacaoFusca();     
        float test;
        printf("digite um valor:");
        scanf("%f", &test);
 * 
        printf(verificarDesconto(test));
 */   
        menuItem = printMenuPrincipal();
         
        escolhaMenuPrincipal(menuItem);
        

        
        printf("\t Menu principal-DIGITE 1 - Sair do programa - DIGITE OUTRO NÚMERO.\n");
        scanf("%i", &sair);

        sair = verificarSair(sair);

    }
    while(sair == 1);
      system (" pause ");
}

