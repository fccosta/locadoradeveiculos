# include <stdio.h>
# include <stdlib.h>
# include <time.h>
//#include <iso646.h>
//# include <conio.h>   // necessário para as funções clrscr e getch
//int AstonMartinMARB00, LaFerrariAperta, BugattiChiron, KoenigseggRegera, bmw;
time_t t;

int AstonMartinMARB00 = 1;
int LaFerrariAperta = 1;
int BugattiChiron = 1;
int KoenigseggRegera = 1;
int ArashAF10Hybrid = 1;
int sair = 1;

struct data{
            int dia;
            int mes;
            int ano;

         };

struct data dLocAstonMartinMARB00, dDevAstonMartinMARB00, dLocLaFerrariAperta,dDevLaFerrariAperta, dLocBugattiChiron, dDevBugattiChiron, dLocKoenigseggRegera, dDevKoenigseggRegera, dLocArashAF10Hybrid, dDevArashAF10Hybrid;

int hLocAstonMartinMARB00, hDevAstonMartinMARB00, hLocLaFerrariAperta, hDevLaFerrariAperta, hLocBugattiChiron, hDevBugattiChiron, hLocKoenigseggRegera, hDevKoenigseggRegera, hLocArashAF10Hybrid, hDevArashAF10Hybrid;



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
         if (AstonMartinMARB00 == 1){printf ("\t Aston Martin MA-RB00  \n");}
         if (LaFerrariAperta == 1){printf ("\t La Ferrari Aperta  \n");}
         if (BugattiChiron == 1){printf ("\t Bugatti Chiron  \n");}
         if (KoenigseggRegera == 1){printf ("\t Koenigsegg Regera  \n");}
         if (ArashAF10Hybrid == 1){printf ("\t Arash AF10 Hybrid  \n");}
         printf ("\n\n");

         printf ("\t CARROS NÃO DISPONÍVEIS | PREVISÃO DE ENTREGA:  \n\n");
         if (AstonMartinMARB00 == 1){printf ("\t Aston Martin MA-RB00    \tDATA: %i/%i/%i  HORA: %d:00hs\n", dDevAstonMartinMARB00.dia,  dDevAstonMartinMARB00.mes, dDevAstonMartinMARB00.ano, hDevAstonMartinMARB00);}
         if (LaFerrariAperta == 1){printf ("\t La Ferrari Aperta      \tDATA: %i/%i/%i  HORA: %d:00hs\n", dDevLaFerrariAperta.dia, dDevLaFerrariAperta.mes,  dDevLaFerrariAperta.ano, hDevLaFerrariAperta);}
         if (BugattiChiron == 1){printf ("\t Bugatti Chiron     \t\tDATA: %i/%i/%i  HORA: %d:00hs\n",dDevBugattiChiron.dia,dDevBugattiChiron.mes,dDevBugattiChiron.ano, hDevBugattiChiron);}
         if (KoenigseggRegera == 1){printf ("\t Koenigsegg Regera    \t\tDATA: %i/%i/%i  HORA: %d:00hs\n",dDevKoenigseggRegera.dia, dDevKoenigseggRegera.mes, dDevKoenigseggRegera.ano, hDevKoenigseggRegera);}
         if (ArashAF10Hybrid == 1){printf ("\t Arash AF10 Hybrid      \tDATA: %i/%i/%i  HORA: %d:00hs\n",dDevArashAF10Hybrid.dia,dDevArashAF10Hybrid.mes,dDevArashAF10Hybrid.ano, hDevArashAF10Hybrid);}
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
         printf ("\t (1) Aston Martin MA-RB00  \n");
         printf ("\t (2) La Ferrari Aperta    \n");
         printf ("\t (3) Bugatti Chiron    \n");
         printf ("\t (4) Koenigsegg Regera  \n");
         printf ("\t (5) Arash AF10 Hybrid    \n");
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
    
    printf("\t\n\nFUNÇÃO +++ TICKET +++  SENDO IMPLEMENTADA.");
    
    /*
    printf("\tValor Final: R$%.2f\n",valor)
    printf("\tData/Hora de Locação: i%/i%/i% / às i%:00hs\n",dataLocacao.dia,dataLocacao.mes,dataLocacao.ano,hora);     
    printf("\tData/Hora de Devolução: i%/i%/i% / às i%:00hs\n",dataDevolucao.dia,dataDevolucao.mes,dataDevolucao.ano,hora);     
 
     
     */
    
}

void locacaoAstonMartinMARB00()
{
float valorLocacao, x;
 
                   logoLegalRentACar();

                   printf ("\t Modelo Escolhido: Aston Martin MA-RB00.        \n");
                   printf ("\t Valor da diaria: R$ 28.800,00                  \n");//1.200,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f",&x);
                   valorLocacao = 28800 * x;
                   //valorLocacao = verificarDesconto(valorLocacao);
                   printf("\tData de locação:(somente números)\n");
                   printf("\tDia:");
                   scanf("%d", &dLocAstonMartinMARB00.dia);
                   printf("\tMês:");
                   scanf("%d", &dLocAstonMartinMARB00.mes);
                   //printf("\tAno:\n");
                   dLocAstonMartinMARB00.ano = 2017;
                   
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                  // printf ("\t (1) SIM \n");
                  // printf ("\t (2) NAO \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        AstonMartinMARB00=0;
                        printf ("\t Locação confirmada. Obrigado. \n\n");
                        printf ("\t Modelo Escolhido: Aston Martin MA-RB00.        \n");
                                          
                       // printTicket(valorLocacao, dLocAstonMartinMARB00, dDevAstonMartinMARB00, hLocAstonMartinMARB00, hDevAstonMartinMARB00);

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }

                   system ("pause");

}

void devolucaoAstonMartinMARB00()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: Aston Martin MA-RB00.        \n");
                // printf ("\t Valor da diaria: R$ 100,00                    \n");
 //                  printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
 //                  scanf ("%f",&x);
 //                  valorLocacao = 100 * x;
 //                  printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");

                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        AstonMartinMARB00=1;
                        printf ("\t Devolução Confirmada. Obrigado. \n\n");
                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");
                   }

                 system ("pause");

 }

void locacaoLaFerrariAperta()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: La Ferrari Aperta.   \n");
                   printf ("\t Valor da diaria: R$ 21.600,00          \n");//900,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f",&x);
                   valorLocacao = 21600 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                  
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        LaFerrariAperta=0;
                        printf ("\t Locação confirmada. Obrigado. \n\n");
                      
                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }
 
                   system ("pause");
}

void devolucaoLaFerrariAperta()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: La Ferrari Aperta.          \n");
//                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
//                   scanf ("%f",&x);
//                   valorLocacao = 120 * x;
//                   printf ("\t Valor da locação : R$%.00f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");

                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        LaFerrariAperta=1;
                        printf ("\t Devolução confirmada. Obrigado. \n\n");
 
                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");

                   }

                   system ("pause");
 }


void locacaoBugattiChiron()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: Bugatti Chiron.\n");
                   printf ("\t Valor da diaria: R$ 24.000,00    \n"); //1.000,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f", &x);
                   valorLocacao = 24000 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirmar digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        BugattiChiron=0;
                        printf ("\t Locação confirmada. Obrigado. \n");
                        //printf ("\t Volte Sempre. \n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n");
                        
                   }

                   system ("pause");

 }

void devolucaoBugattiChiron()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: Bugatti Chiron.\n");

                   printf ("\t Para confirmar digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        BugattiChiron=0;
                        printf ("\t Locação confirmada. Obrigado. \n");
             
                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n");
                    
                   }
 
                   system ("pause");


 }



void locacaoKoenigseggRegera()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: Koenigsegg Regera.        \n");
                   printf ("\t Valor da diaria: R$ 21.600,00               \n");// 900,00 hr
                   printf ("\t Digite a quantidade de dias de locação:     \n");
                   scanf ("%f",&x);
                   valorLocacao = 21600 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        KoenigseggRegera=0;
                        printf ("\t Locação confirmada. Obrigado. \n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }

                   system ("pause");
 }


void devolucaoKoenigseggRegera()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: Koenigsegg Regera.        \n");
                  
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        KoenigseggRegera=1;
                        printf ("\t Devolução confirmada. Obrigado. \n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Devolução Cancelada!\n\n");
                   }

                   system ("pause");
 }


void locacaoArashAF10Hybrid()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Escolhido: ArashAF10Hybrid.         \n");
                   
                   printf ("\t Valor da diaria: R$ 21.600,00              \n");// 900,00 hr
                   printf ("\t Digite a quantidade de dias de locação:\n");
                   scanf ("%f",&x);
                   valorLocacao = 400 * x;
                   printf ("\t Valor da locação : R$%.2f \n",valorLocacao );
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        ArashAF10Hybrid=0;
                        printf ("\t Locação confirmada. Obrigado.\n\n");

                   }
                   else if (x == 2)
                   {
                        printf ("\t Locação Cancelada!\n\n");
                   }

                   system ("pause");
}

void devolucaoArashAF10Hybrid()
{
float valorLocacao, x;
                   
                   logoLegalRentACar();
                   
                   printf ("\t Modelo Devolvido: ArashAF10Hybrid         \n");
                                  
                   printf ("\t Para confirma digite 1 Cancelar 2: \n");
                   scanf ("%f",&x);

                   x = verificaEntradaUmOuDois(x);

                   if(x == 1)
                   {
                        ArashAF10Hybrid=1;
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
            locacaoAstonMartinMARB00();
            break;
        case 2:
            locacaoLaFerrariAperta();
            break;
        case 3:
            locacaoBugattiChiron();
            break;
        case 4:
            locacaoKoenigseggRegera();
            break;
        case 5:
            locacaoArashAF10Hybrid();
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
            devolucaoAstonMartinMARB00();
            break;
        case 2:
            devolucaoLaFerrariAperta();
            break;
        case 3:
            devolucaoBugattiChiron();
            break;
        case 4:
            devolucaoKoenigseggRegera();
            break;
        case 5:
            devolucaoArashAF10Hybrid();
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
 * TESTADA EM locacaoAston Martin MA-RB00();     
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

