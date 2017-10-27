# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#include <iso646.h>
//# include <conio.h>   // necessário para as funções clrscr e getch
//int palio, uno, gol, stilo, bmw;
time_t t;

int palio = 1;
int uno = 1;
int gol = 1;
int stilo = 1;
int bmw = 1;
int sair = 1;

struct data{
            int dia;
            int mes;
            int ano;

         };

struct data dLocPalio, dDevPalio, dLocUno,dDevUno, dLocGol, dDevGol, dLocStilo, dDevStilo, dLocBmw, dDevBmw;

int hLocPalio, hDevPalio, hLocUno, hDevUno, hLocGol, hDevGol, hLocStilo, hDevStilo, hLocBmw, hDevBmw;



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
         if (palio == 1){printf ("\t Palio  \n");}
         if (uno == 1){printf ("\t Uno  \n");}
         if (gol == 1){printf ("\t Gol  \n");}
         if (stilo == 1){printf ("\t Stilo  \n");}
         if (bmw == 1){printf ("\t BMW  \n");}
         printf ("\n\n");

         printf ("\t CARROS NÃO DISPONÍVEIS | PREVISÃO DE ENTREGA:  \n\n");
         if (palio == 0){printf ("\tPalio\t    \t\t\tDATA: %d/%d/%d,  HORA: %d:00\n", dDevPalio.dia,  dDevPalio.mes, &dDevPalio.ano, &hDevPalio);}
         if (uno == 0){printf ("\t  Uno\t      \t\t\tDATA: i%/i%/i% as %d:00hs\n", dDevUno.dia, dDevUno.mes,  dDevUno.ano, hDevUno);}
         if (gol == 0){printf ("\t  Gol\t      \t\t\tDATA: i%/i%/i%  as %d:00hs\n",dDevGol.dia,dDevGol.mes,dDevGol.ano, hDevGol);}
         if (stilo == 0){printf ("\tStilo\t    \t\t\tDATA: i%/i%/i%  as d%:00hs\n",dDevStilo.dia, dDevStilo.mes, dDevStilo.ano, hDevStilo);}
         if (bmw == 0){printf ("\t  BMW\t      \t\t\tDATA: i%/i%/i%  as %d:00hs\n",dDevBmw.dia,dDevBmw.mes,dDevBmw.ano, hDevBmw);}
         printf ("\n\n");




         struct tm * tm;
         time_t t;

         char data[20];

         //codigo provisório
/*
        struct diaMesAno{
            int dia;
            int mes;
            int ano;

         };
         */
        // struct diaMesAno dataLocacao;
/*
         struct diaMesAno dataLocacao;

         dataLocacao.dia = strftime(data, 20, "%d-%m-%y", tm);

         printf("dia %i\n\n", dataLocacao.dia);

         printf("Data : %d-%m-%y Hora:%s \n\n",__DATE__,__TIME__);
*/
         //

        // código...


         time(&t);
         tm = localtime(&t);
         strftime(data, 20, "%d-%m-%y", tm);

         printf("\t%s, Hora: %s\n\n", data, __TIME__);
         printf("\t%i, Hora: %s\n\n", tm->tm_mday, __TIME__);
        // printf("%s, Hora: %s\n\n", , __TIME__);

         
        


/*         printf ("\t Uno    \n");
         printf ("\t Gol    \n");
         printf ("\t Stilo  \n");
         printf ("\t BMW    \n");

         printf ("\t CARROS ALUGADOS:  \n\n");
         printf ("\t (1) Palio  \n");
         printf ("\t (2) Uno    \n");
         printf ("\t (3) Gol    \n");
         printf ("\t (4) Stilo  \n");
         printf ("\t (5) BMW    \n");
*/

}
int printMenuPrincipal() //imprime o menu principal
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
         printf ("\t (1) Palio  \n");
         printf ("\t (2) Uno    \n");
         printf ("\t (3) Gol    \n");
         printf ("\t (4) Stilo  \n");
         printf ("\t (5) BMW    \n");
         printf ("\t (0) Sair    \n");
         
         int x;
         scanf("%i", &x);
         if(x<0 ||x>5)
            {
                system ("cls");
                printf ("\tValor inválido. Por gentileza, digite um valor válido:\n\n");
                printMenuLocacao();
            }
         return x;
}

void printTicket(float valor, struct data dataLocacao,struct data dataDevolucao, int hora){
    
    printf("\t\n\nFUNÇÃO SENDO IMPLEMENTADA.");
    
    /*
    printf("\tValor Final: R$%.2f\n",valor)
    printf("\tData/Hora de Locação: i%/i%/i% / às i%:00hs\n",dataLocacao.dia,dataLocacao.mes,dataLocacao.ano,hora);     
    printf("\tData/Hora de Devolução: i%/i%/i% / às i%:00hs\n",dataDevolucao.dia,dataDevolucao.mes,dataDevolucao.ano,hora);     
 
     
     */
    
}

void locacaoPalio()
{
float valorLocacao, x;
 
                   logoLegalRentACar();

                   printf ("\t Modelo Escolhido: PALIO.        \n");
                   printf ("\t Placa: GTS 6598 \n");
                   printf ("\t Cor Verde  Ano 98/99 \n");
                   printf ("\t Valor da diaria: R$ 100,00                    \n");
                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
                   scanf ("%f",&x);
                   valorLocacao = 100 * x;
                   //valorLocacao = verificarDesconto(valorLocacao);
                   printf("\tData de locação:(somente números)\n");
                   printf("\tDia:");
                   scanf("%d", &dLocPalio.dia);
                   printf("\tMês:");
                   scanf("%d", &dLocPalio.mes);
                   //printf("\tAno:\n");
                   dLocPalio.ano = 2017;
                   
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                  // printf ("\t (1) SIM \n");
                  // printf ("\t (2) NAO \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        palio=0;
                        printf ("\t Locação confirmada. Obrigado. \n\n");
                        printf ("\t Modelo Escolhido: PALIO.        \n");
                        
                //        printTicket(valorLocacao, dLocPalio, dDevPalio, hLocPalio, hDevPalio);

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }

                   system ("pause");

}

void devolucaoPalio()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: PALIO.        \n");
                   printf ("\t Placa: GTS 6598 \n");
                   printf ("\t Cor Verde  Ano 98/99 \n");
 //                  printf ("\t Valor da diaria: R$ 100,00                    \n");
 //                  printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
 //                  scanf ("%f",&x);
 //                  valorLocacao = 100 * x;
 //                  printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");

                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        palio=1;
                        printf ("\t Devolução Confirmada. Obrigado. \n\n");
                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");
                   }

                 system ("pause");

 }

void locacaoUno()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: UNO.          \n");
                   printf ("\t Placa: GYH 2635 \n");
                   printf ("\t Cor Prata  Ano 03/04 \n");
                   printf ("\t Valor da diaria: R$ 120,00                    \n");
                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
                   scanf ("%f",&x);
                   valorLocacao = 120 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                  
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        uno=0;
                        printf ("\t Locação confirmada. Obrigado. \n\n");
                      
                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }
 
                   system ("pause");
}

void devolucaoUno()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: UNO.          \n");
                   printf ("\t Placa: GYH 2635 \n");
                   printf ("\t Cor Prata  Ano 03/04 \n");
                   printf ("\t Valor da diaria: R$ 120,00                    \n");
//                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
//                   scanf ("%f",&x);
//                   valorLocacao = 120 * x;
//                   printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");

                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        uno=1;
                        printf ("\t Devolução confirmada. Obrigado. \n\n");
 
                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");

                   }

                   system ("pause");
 }


void locacaoGol()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: GOL.\n");
                   printf ("\t Placa: POH 1645 \n");
                   printf ("\t Cor Prata  Ano 2007 \n");
                   printf ("\t Valor da diaria: R$ 150,00 \n");
                   printf ("\t Quantos dias voce pretende ficar com o carro?\n");
                   scanf ("%f", &x);
                   valorLocacao = 150 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirmar digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        gol=0;
                        printf ("\t Locação confirmada. Obrigado. \n");
                        //printf ("\t Volte Sempre. \n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n");
                        
                   }

                   system ("pause");

 }

void devolucaoGol()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: GOL.\n");
                   printf ("\t Placa: POH 1645 \n");
                   printf ("\t Cor Prata  Ano 2007 \n");
                   printf ("\t Valor da diaria: R$ 150,00\n");
//                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
//                   scanf ("%f", &x);
//                   valorLocacao = 150 * x;
//                   printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
                   printf ("\t Para confirmar digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        gol=0;
                        printf ("\t Locação confirmada. Obrigado. \n");
             
                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n");
                    
                   }
 
                   system ("pause");


 }



void locacaoStilo()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: STILO.        \n");
                   printf ("\t Placa: MZI 4512 \n");
                   printf ("\t Cor Vermelho  Ano 2010 \n");
                   printf ("\t Valor da diaria: R$ 170,00                    \n");
                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
                   scanf ("%f",&x);
                   valorLocacao = 170 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        stilo=0;
                        printf ("\t Locação confirmada. Obrigado. \n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }

                   system ("pause");
 }


void devolucaoStilo()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: STILO.        \n");
                   printf ("\t Placa: MZI 4512 \n");
                   printf ("\t Cor Vermelho  Ano 2010 \n");
                   printf ("\t Valor da diaria: R$ 170,00                    \n");
//                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
//                   scanf ("%f",&x);
//                   valorLocacao = 170 * x;
//                   printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        stilo=1;
                        printf ("\t Devolução confirmada. Obrigado. \n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");
                   }

                   system ("pause");
 }


void locacaoBmw()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t O modelo que voce escolheu e uma BMW.         \n");
                   printf ("\t Placa: OTT 6687 \n");
                   printf ("\t Cor Prata  Ano 2009 \n");
                   printf ("\t Valor da diaria: R$ 400,00                    \n\n");
                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n\n");
                   scanf ("%f",&x);
                   valorLocacao = 400 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        bmw=0;
                        printf ("\t Locação confirmada. Obrigado.\n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }

                   system ("pause");
}

void devolucaoBmw()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t O modelo que voce escolheu e uma BMW.         \n");
                   printf ("\t Placa: OTT 6687 \n");
                   printf ("\t Cor Prata  Ano 2009 \n");
                   printf ("\t Valor da diaria: R$ 400,00                    \n\n");
//                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n\n");
//                  scanf ("%f",&x);
//                   valorLocacao = 400 * x;
//                   printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
//                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        bmw=1;
                        printf ("\t Devolução confirmada. Obrigado.\n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");
                   }

                   system ("pause");
}

void alugarVeiculo(int menuItem)
{

//    scanf ("%i",&menuItem); //ler a escolha do usuario baseado no menu principal (função printMenu)

//        clrscr(); //limpa a tela

    switch(menuItem)
    {
        case 1:
            locacaoPalio();
            break;
        case 2:
            locacaoUno();
            break;
        case 3:
            locacaoGol();
            break;
        case 4:
            locacaoStilo();
            break;
        case 5:
            locacaoBmw();
            break;
    }
}

void devolverVeiculo(int menuItem)
{
    //int menuItem;

    //scanf ("%i",&menuItem); //ler a escolha do usuario baseado no menu principal (função printMenu)

//        clrscr(); //limpa a tela

    switch(menuItem)
    {
        case 1:
            devolucaoPalio();
            break;
        case 2:
            devolucaoUno();
            break;
        case 3:
            devolucaoGol();
            break;
        case 4:
            devolucaoStilo();
            break;
        case 5:
            devolucaoBmw();
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
    if (valor<1 || valor>2)
        {
            printf("\tPor gentileza, digite 1 ou 2.\n");
            scanf("%i", &valor);
            verificaEntradaUmOuDois(valor);//scanf("%i", &valor);

        }else if (valor == 1)
        {
                       
        }else if (valor == 2)
        {
            system ("cls");
            printf ("\t=============================================================\n");
            printf ("\t=====================PROGRAMA FINALIZADO=====================\n");
            printf ("\t=============================================================\n\n");
        }
    return valor;
}

float verificarDesconto(float valor)
{    
    int x;
    printf("\tAPLICAR DESCONTO.\n");
    printf("\t(1)Idoso.\n");
    printf("\t(2)Empresa parceira.\n");
    printf("\t(0)Sem desconto.\n");

    scanf("%i", &x);
    while (x<0 || x>2)
        {
            printf("\tPor gentileza, digite 1, 2 ou 0.\n");
            scanf("%i", &x);
            //verificarDesconto(valor);//scanf("%i", &valor);
        }
        if (x == 1)
        {
            printf("\tValor com 10%% de Desconto: R$%.2f\n", valor*0.9);
            return valor*0.9;

        }else if (x == 2)
        {
            printf("\tValor com 5%% de Desconto: R$%.2f\n", valor*0.95);
            return valor*0.95;
        }else if (x == 0)
        {
            return valor*1.0;
        }
    //return valor;
}


/*
int verificaEntradaUmOuDois(int valor)
{
    int a=0;

    do
    {
        if (valor == 1)
            {
                ++a;
            }
        if(valor == 2)
            {
                ++a;
            }

        if(a==0)
            {
                printf("Por gentileza, digite 1 ou 2.\n");
                scanf("%i", &valor);
            }
    }while(a==0);
}
 */

 //++++++++++++++++++++++++++++++++++++
/*
  //
  // pega o número de segundos desde 1970
  //
  t = time(NULL);

  //
  // mostra na tela, formatado
  //
  print_time(t);

  //
  // pega o fuso horário da máquina para pegar o horário local
  // ao invés de GMT.
  //
  long timezone;

  _tzset(); // carrega as configurações de fuso

  _get_timezone(&timezone); // lê a diferença do fuso

  cout << timezone << endl;

  //
  // ajusta o horário pelo fuso
  //
  t -= timezone;

  print_time(t);

  //
  // avança da data em 2 dias
  //
  t += 48 * 60 * 60;

  //
  // mostra novamente
  //
  print_time(t);



//#include <stdio.h>
//#include <tchar.h>
#include <time.h>

//using namespace std;

void print_time(time_t t)
{
  tm* formatted_time;

  //
  // essa função "quebra" essa quantidade de segundos e dia, mês, ano, etc
  //
  formatted_time = gmtime(&t);

  //
  // isso vai mostrar algo como "2009/12/07 14:42:57"
  // note que é necessário somar 1900 na data para pegar o ano corrente
  //
    printf << setfill('0') <<
    setw(4) << formatted_time->tm_year+1900 << "/" <<
    setw(2) << formatted_time->tm_mon+1 << "/" <<
    setw(2) << formatted_time->tm_mday << " " <<
    setw(2) << formatted_time->tm_hour << ":" <<
    setw(2) << formatted_time->tm_min << ":" <<
    setw(2) << formatted_time->tm_sec << endl;
}


int main()
{


  return 0;
}






*/
 //+++++++++++++++++++++++++++++++++++


void main ()
{
do{
        int menuItem;
        
        //printCatalogo(); teste printCatalogo();
/* código para teste da funçao verificaDesconto();   
 * COM ESSE COMENTÁRIO A FUNÇÃO ESTÁ SENDO 
 * TESTADA EM locacaoPalio();     
        float test;
        printf("digite um valor:");
        scanf("%f", &test);
        printf(verificarDesconto(test));
 */   
        menuItem = printMenuPrincipal();
         
        escolhaMenuPrincipal(menuItem);
        
        //scanf ("%i",&menuItem);
        /* void escolhaMenuPrincipal(int escolha)
         {
            switch(escolha)
            {
                case 1:
                    printCatalogo();
                    break;
                case 2:
                    printMenuLocacao();                
                    alugarVeiculo();                
                    break;           
                case 3:
                    //devolver veiculo
                    break;
                case 0:
                    //sair             
                    break;
            }  
         }
        */

        //printMenuLocacao();
        
        
        printf("\tPara voltar ao menu principal digite 1 - Sair do programa, digite 2.\n");
        scanf("%i", &sair);

        sair = verificaEntradaUmOuDois(sair);

        /*
        void verificaEntradaUmOuDois(int valor)
        {
            int a=0;
            do
            {
                if (valor == 1)
                    {
                        a = 1;
                    }
                if(valor == 2)
                    {
                        a = 1;
                    }
                if(a==0)
                    {
                        printf("Por gentileza, digite 1 ou 2.\n");
                        scanf("%i", &valor);
                    }
            }while(a==0);
        }
        */

    }
    while(sair == 1);
      system (" pause ");
}


